#ifndef DIALOGDELCONFIRM_H
#define DIALOGDELCONFIRM_H

#include <QDialog>

namespace Ui {
class DialogDelConfirm;
}

class DialogDelConfirm : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDelConfirm(QWidget *parent = nullptr);
    ~DialogDelConfirm();

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

    void on_DialogDelConfirm_destroyed();

    void on_DialogDelConfirm_finished(int result);

signals:
    int onConfirmation();

private:
    Ui::DialogDelConfirm *ui;

public:
    int confirmationStatus;
};

#endif // DIALOGDELCONFIRM_H
