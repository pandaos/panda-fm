/********************************************************************************
** Form generated from reading UI file 'bulk-rename.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BULK_2D_RENAME_H
#define UI_BULK_2D_RENAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_BulkRenameDialog
{
public:
    QGridLayout *gridLayout;
    QSpinBox *spinBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QLabel *label2;
    QSpacerItem *horizontalSpacer;
    QLabel *label1;
    QLineEdit *lineEdit;

    void setupUi(QDialog *BulkRenameDialog)
    {
        if (BulkRenameDialog->objectName().isEmpty())
            BulkRenameDialog->setObjectName(QString::fromUtf8("BulkRenameDialog"));
        gridLayout = new QGridLayout(BulkRenameDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setVerticalSpacing(4);
        spinBox = new QSpinBox(BulkRenameDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(-1000);
        spinBox->setMaximum(1000);

        gridLayout->addWidget(spinBox, 2, 2, 1, 1);

        verticalSpacer = new QSpacerItem(5, 5, QSizePolicy::Minimum, QSizePolicy::MinimumExpanding);

        gridLayout->addItem(verticalSpacer, 3, 2, 1, 1);

        buttonBox = new QDialogButtonBox(BulkRenameDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 4, 1, 1, 2);

        label2 = new QLabel(BulkRenameDialog);
        label2->setObjectName(QString::fromUtf8("label2"));

        gridLayout->addWidget(label2, 2, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(5, 5, QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 0, 1, 1);

        label1 = new QLabel(BulkRenameDialog);
        label1->setObjectName(QString::fromUtf8("label1"));

        gridLayout->addWidget(label1, 0, 0, 1, 3);

        lineEdit = new QLineEdit(BulkRenameDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(lineEdit, 1, 0, 1, 3);


        retranslateUi(BulkRenameDialog);

        QMetaObject::connectSlotsByName(BulkRenameDialog);
    } // setupUi

    void retranslateUi(QDialog *BulkRenameDialog)
    {
        BulkRenameDialog->setWindowTitle(QApplication::translate("BulkRenameDialog", "Bulk Rename", nullptr));
        label2->setText(QApplication::translate("BulkRenameDialog", "# will be replaced by numbers starting with:", nullptr));
        label1->setText(QApplication::translate("BulkRenameDialog", "Rename selected files to:", nullptr));
        lineEdit->setText(QApplication::translate("BulkRenameDialog", "Name#", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BulkRenameDialog: public Ui_BulkRenameDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BULK_2D_RENAME_H
