/********************************************************************************
** Form generated from reading UI file 'dialogdelconfirm.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELCONFIRM_H
#define UI_DIALOGDELCONFIRM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogDelConfirm
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *DialogDelConfirm)
    {
        if (DialogDelConfirm->objectName().isEmpty())
            DialogDelConfirm->setObjectName(QString::fromUtf8("DialogDelConfirm"));
        DialogDelConfirm->resize(376, 125);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogDelConfirm->sizePolicy().hasHeightForWidth());
        DialogDelConfirm->setSizePolicy(sizePolicy);
        buttonBox = new QDialogButtonBox(DialogDelConfirm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-80, 50, 441, 71));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(DialogDelConfirm);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 421, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ubuntu Condensed")});
        font.setPointSize(16);
        font.setBold(true);
        label->setFont(font);

        retranslateUi(DialogDelConfirm);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, DialogDelConfirm, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, DialogDelConfirm, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(DialogDelConfirm);
    } // setupUi

    void retranslateUi(QDialog *DialogDelConfirm)
    {
        DialogDelConfirm->setWindowTitle(QCoreApplication::translate("DialogDelConfirm", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogDelConfirm", "Are you sure you want to delete this item?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDelConfirm: public Ui_DialogDelConfirm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELCONFIRM_H
