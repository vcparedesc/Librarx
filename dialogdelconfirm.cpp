#include "dialogdelconfirm.h"
#include "ui_dialogdelconfirm.h"

DialogDelConfirm::DialogDelConfirm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDelConfirm)
{
    ui->setupUi(this);
    confirmationStatus = 0;
}

DialogDelConfirm::~DialogDelConfirm()
{
    delete ui;
}

void DialogDelConfirm::on_buttonBox_accepted()
{
    confirmationStatus = 1;
    emit onConfirmation();
}


void DialogDelConfirm::on_buttonBox_rejected()
{
    confirmationStatus = 0;
    emit onConfirmation();
}



void DialogDelConfirm::on_DialogDelConfirm_destroyed()
{
    confirmationStatus = 0;
    emit onConfirmation();
}


void DialogDelConfirm::on_DialogDelConfirm_finished(int result)
{
    confirmationStatus = 0;
    emit onConfirmation();
}

