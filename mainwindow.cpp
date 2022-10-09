#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QString sPath = "/home/victor/Dropbox/Xournal";
    dirmodel = new QFileSystemModel(this);
    dirmodel->setFilter(QDir::NoDotDot | QDir::AllDirs | QDir::NoDot);

    QModelIndex idx = dirmodel->setRootPath(sPath);

    ui->treeView->setModel(dirmodel);


    ui->treeView->setRootIndex(idx);
    //ui->treeView->showColumn(0);
    ui->treeView->hideColumn(1);
    ui->treeView->hideColumn(2);
    ui->treeView->hideColumn(3);

    filemodel = new QFileSystemModel(this);
    filemodel->setFilter( QDir::Files );

    idx = filemodel->setRootPath(sPath);
    ui->listView->setModel(filemodel);

    ui->listView->setRootIndex(idx);

    dialConfirm = new DialogDelConfirm();

    connect(dialConfirm, &DialogDelConfirm::onConfirmation, &loop, &QEventLoop::quit);
    //QObject::connect(&dialConfirm, &DialogDelConfirm::onConfirmation, &loop, &QEventLoop::quit );
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_treeView_clicked(const QModelIndex &index)
{
    QString sPath = dirmodel->fileInfo(index).absoluteFilePath();
    filemodel->setFilter( QDir::Files );
    ui->listView->setModel(filemodel);
    ui->listView->setRootIndex(filemodel->setRootPath(sPath));
    folderIndex = &index;
    currentFolderPath = sPath;

    qDebug()<<"Folder Index Captured";
}


void MainWindow::on_listView_clicked(const QModelIndex &index)
{
    QString sPath = filemodel->fileInfo(index).absoluteFilePath();
    currentFilePath = sPath;
}


void MainWindow::on_pushButton_released()
{
    QString newFolderName = ui->le_folder->text();
    QDir().mkdir(currentFolderPath + "/" +newFolderName);

    qDebug()<<currentFolderPath;
    qDebug()<<newFolderName;
}


void MainWindow::on_pb_nf_released()
{
    QString newFileName = ui->le_file->text();
    QFile::copy("/home/victor/Dropbox/Helpers/EmptyXournal.xopp", currentFolderPath + "/" + newFileName + ".xopp");
}

void MainWindow::disableAllButtons(bool toBeEnabled){
    QList<QPushButton *> buttonsList = this->findChildren<QPushButton *>();
    for (int i = 0; i < buttonsList.count(); i++){
        buttonsList.at(i)->setEnabled(toBeEnabled);
    }
}

void MainWindow::on_pb_filedel_released()
{

    dialConfirm->show();
    disableAllButtons(false);
    loop.exec();
    disableAllButtons(true);

    QFile file(currentFilePath);

    if(dialConfirm->confirmationStatus){
        file.remove();
        dialConfirm->confirmationStatus = 0;
    }

}


void MainWindow::on_listView_doubleClicked(const QModelIndex &index)
{
    QString sPath = filemodel->fileInfo(index).absoluteFilePath();
    QStringList sList;
    sList << sPath;
    QString sCommand = "xournalpp " + sPath;

    int sz = sPath.size();
    QString extension;

    if(sz > 4) { // .xoj
        extension = sPath.last(4);

        if(extension == ".xoj"){
            process->startDetached("xournalpp", sList);
        }

        if (sz > 5){ // .xopp
          extension = sPath.last(5);

          if(extension == ".xopp") {
              process->startDetached("xournalpp", sList);
          }
        }
    }

    currentFilePath = sPath;

    qDebug() << sCommand;
    qDebug() << extension;
}


void MainWindow::on_pb_folderdel_released()
{
    dialConfirm->show();
    disableAllButtons(false);
    loop.exec();
    disableAllButtons(true);

    QDir dir(currentFolderPath);

    if(dialConfirm->confirmationStatus) {
        dir.removeRecursively();
        dialConfirm->confirmationStatus = 0;
    }
}

