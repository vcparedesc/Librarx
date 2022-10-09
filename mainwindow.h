#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "dialogdelconfirm.h"
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_treeView_clicked(const QModelIndex &index);

    void on_listView_clicked(const QModelIndex &index);

    void on_pushButton_released();

    void on_pb_nf_released();

    void on_pb_filedel_released();

    void on_listView_doubleClicked(const QModelIndex &index);

    void on_pb_folderdel_released();

private:
    void disableAllButtons(bool toBeEnabled);

private:
    Ui::MainWindow *ui;
    QFileSystemModel *dirmodel;
    QFileSystemModel *filemodel;
    QProcess *process;
    const QModelIndex *folderIndex;
    QString currentFolderPath;
    QString currentFilePath;
    DialogDelConfirm *dialConfirm;
    QEventLoop loop;
};
#endif // MAINWINDOW_H
