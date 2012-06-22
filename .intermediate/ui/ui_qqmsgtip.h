/********************************************************************************
** Form generated from reading UI file 'qqmsgtip.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQMSGTIP_H
#define UI_QQMSGTIP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQMsgTip
{
public:
    QComboBox *cb_msgs_;

    void setupUi(QWidget *QQMsgTip)
    {
        if (QQMsgTip->objectName().isEmpty())
            QQMsgTip->setObjectName(QString::fromUtf8("QQMsgTip"));
        QQMsgTip->resize(220, 30);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQMsgTip->sizePolicy().hasHeightForWidth());
        QQMsgTip->setSizePolicy(sizePolicy);
        QQMsgTip->setStyleSheet(QString::fromUtf8("border: 2px solid gray;\n"
"border-radius: 8px;"));
        cb_msgs_ = new QComboBox(QQMsgTip);
        cb_msgs_->setObjectName(QString::fromUtf8("cb_msgs_"));
        cb_msgs_->setGeometry(QRect(10, 2, 200, 25));
        sizePolicy.setHeightForWidth(cb_msgs_->sizePolicy().hasHeightForWidth());
        cb_msgs_->setSizePolicy(sizePolicy);
        cb_msgs_->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"	 background-image: url(:/new/login/images/LoginPanel/bg_white.png);\n"
"     border: 1px solid gray;\n"
"     border-radius: 6px;\n"
"     padding: 1px 18px 1px 3px;\n"
"     min-width: 6em;\n"
" }\n"
"\n"
" QComboBox:on { /* shift the text when the popup opens */\n"
"     padding-top: 3px;\n"
"     padding-left: 4px;\n"
" }\n"
"\n"
" QComboBox::drop-down {\n"
"     subcontrol-origin: padding;\n"
"     subcontrol-position: top right;\n"
"     width: 15px;\n"
"\n"
"     border-left-width: 1px;\n"
"     border-left-color: darkgray;\n"
"     border-left-style: solid; /* just a single line */\n"
"     border-top-right-radius: 3px; /* same radius as the QComboBox */\n"
"     border-bottom-right-radius: 3px;\n"
" }\n"
"\n"
" QComboBox::down-arrow:on { /* shift the arrow when popup is open */\n"
"     top: 1px;\n"
"     left: 1px;\n"
" }\n"
"\n"
"QComboBox QAbstractItemView {\n"
"     border: 2px solid darkgray;\n"
"	border-radius: 5px;\n"
"     selection-background-color: lightgray;\n"
" }"));

        retranslateUi(QQMsgTip);

        QMetaObject::connectSlotsByName(QQMsgTip);
    } // setupUi

    void retranslateUi(QWidget *QQMsgTip)
    {
        QQMsgTip->setWindowTitle(QApplication::translate("QQMsgTip", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQMsgTip: public Ui_QQMsgTip {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQMSGTIP_H
