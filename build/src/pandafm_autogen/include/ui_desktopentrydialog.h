/********************************************************************************
** Form generated from reading UI file 'desktopentrydialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DESKTOPENTRYDIALOG_H
#define UI_DESKTOPENTRYDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DesktopEntryDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *descriptionLabel;
    QLineEdit *descriptionEdit;
    QLabel *commentLabel;
    QLineEdit *commentEdit;
    QLabel *commandLabel;
    QHBoxLayout *horizontalLayout;
    QLineEdit *commandEdit;
    QToolButton *commandButton;
    QLabel *iconLabel;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *iconEdit;
    QToolButton *iconButton;
    QLabel *terminalLabel;
    QComboBox *terminalCombo;
    QLabel *typeLabel;
    QComboBox *typeCombo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DesktopEntryDialog)
    {
        if (DesktopEntryDialog->objectName().isEmpty())
            DesktopEntryDialog->setObjectName(QString::fromUtf8("DesktopEntryDialog"));
        DesktopEntryDialog->resize(400, 312);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("application-x-desktop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        DesktopEntryDialog->setWindowIcon(icon);
        verticalLayout = new QVBoxLayout(DesktopEntryDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(6, 6, 6, 6);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        nameLabel = new QLabel(DesktopEntryDialog);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(DesktopEntryDialog);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));
        nameEdit->setClearButtonEnabled(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        descriptionLabel = new QLabel(DesktopEntryDialog);
        descriptionLabel->setObjectName(QString::fromUtf8("descriptionLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, descriptionLabel);

        descriptionEdit = new QLineEdit(DesktopEntryDialog);
        descriptionEdit->setObjectName(QString::fromUtf8("descriptionEdit"));
        descriptionEdit->setClearButtonEnabled(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, descriptionEdit);

        commentLabel = new QLabel(DesktopEntryDialog);
        commentLabel->setObjectName(QString::fromUtf8("commentLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, commentLabel);

        commentEdit = new QLineEdit(DesktopEntryDialog);
        commentEdit->setObjectName(QString::fromUtf8("commentEdit"));
        commentEdit->setClearButtonEnabled(true);

        formLayout->setWidget(2, QFormLayout::FieldRole, commentEdit);

        commandLabel = new QLabel(DesktopEntryDialog);
        commandLabel->setObjectName(QString::fromUtf8("commandLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, commandLabel);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        commandEdit = new QLineEdit(DesktopEntryDialog);
        commandEdit->setObjectName(QString::fromUtf8("commandEdit"));
        commandEdit->setClearButtonEnabled(true);

        horizontalLayout->addWidget(commandEdit);

        commandButton = new QToolButton(DesktopEntryDialog);
        commandButton->setObjectName(QString::fromUtf8("commandButton"));

        horizontalLayout->addWidget(commandButton);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        iconLabel = new QLabel(DesktopEntryDialog);
        iconLabel->setObjectName(QString::fromUtf8("iconLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, iconLabel);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        iconEdit = new QLineEdit(DesktopEntryDialog);
        iconEdit->setObjectName(QString::fromUtf8("iconEdit"));
        iconEdit->setText(QString::fromUtf8("application-x-desktop"));
        iconEdit->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(iconEdit);

        iconButton = new QToolButton(DesktopEntryDialog);
        iconButton->setObjectName(QString::fromUtf8("iconButton"));

        horizontalLayout_2->addWidget(iconButton);


        formLayout->setLayout(5, QFormLayout::FieldRole, horizontalLayout_2);

        terminalLabel = new QLabel(DesktopEntryDialog);
        terminalLabel->setObjectName(QString::fromUtf8("terminalLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, terminalLabel);

        terminalCombo = new QComboBox(DesktopEntryDialog);
        terminalCombo->addItem(QString());
        terminalCombo->addItem(QString());
        terminalCombo->setObjectName(QString::fromUtf8("terminalCombo"));

        formLayout->setWidget(6, QFormLayout::FieldRole, terminalCombo);

        typeLabel = new QLabel(DesktopEntryDialog);
        typeLabel->setObjectName(QString::fromUtf8("typeLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, typeLabel);

        typeCombo = new QComboBox(DesktopEntryDialog);
        typeCombo->addItem(QString());
        typeCombo->addItem(QString());
        typeCombo->setObjectName(QString::fromUtf8("typeCombo"));

        formLayout->setWidget(7, QFormLayout::FieldRole, typeCombo);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(DesktopEntryDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DesktopEntryDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), DesktopEntryDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DesktopEntryDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DesktopEntryDialog);
    } // setupUi

    void retranslateUi(QDialog *DesktopEntryDialog)
    {
        DesktopEntryDialog->setWindowTitle(QApplication::translate("DesktopEntryDialog", "Create Launcher", nullptr));
        nameLabel->setText(QApplication::translate("DesktopEntryDialog", "Name:", nullptr));
        nameEdit->setPlaceholderText(QString());
        descriptionLabel->setText(QApplication::translate("DesktopEntryDialog", "Description:", nullptr));
        commentLabel->setText(QApplication::translate("DesktopEntryDialog", "Comment:", nullptr));
        commandLabel->setText(QApplication::translate("DesktopEntryDialog", "Command:", nullptr));
        commandButton->setText(QApplication::translate("DesktopEntryDialog", "...", nullptr));
        iconLabel->setText(QApplication::translate("DesktopEntryDialog", "Icon:", nullptr));
        iconButton->setText(QApplication::translate("DesktopEntryDialog", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        terminalLabel->setToolTip(QApplication::translate("DesktopEntryDialog", "Run in terminal?", nullptr));
#endif // QT_NO_TOOLTIP
        terminalLabel->setText(QApplication::translate("DesktopEntryDialog", "Terminal:", nullptr));
        terminalCombo->setItemText(0, QApplication::translate("DesktopEntryDialog", "No", nullptr));
        terminalCombo->setItemText(1, QApplication::translate("DesktopEntryDialog", "Yes", nullptr));

#ifndef QT_NO_TOOLTIP
        terminalCombo->setToolTip(QApplication::translate("DesktopEntryDialog", "Run in terminal?", nullptr));
#endif // QT_NO_TOOLTIP
        typeLabel->setText(QApplication::translate("DesktopEntryDialog", "Type:", nullptr));
        typeCombo->setItemText(0, QApplication::translate("DesktopEntryDialog", "Application", nullptr));
        typeCombo->setItemText(1, QApplication::translate("DesktopEntryDialog", "Link", nullptr));

    } // retranslateUi

};

namespace Ui {
    class DesktopEntryDialog: public Ui_DesktopEntryDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DESKTOPENTRYDIALOG_H
