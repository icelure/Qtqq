/********************************************************************************
** Form generated from reading UI file 'qqchatlogwin.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQCHATLOGWIN_H
#define UI_QQCHATLOGWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQChatLogWin
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *msgbrowse;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *btn_last;
    QToolButton *btn_prep;
    QLineEdit *le_curr_page;
    QLabel *lbl_page_count;
    QToolButton *btn_next;
    QToolButton *btn_first;

    void setupUi(QWidget *QQChatLogWin)
    {
        if (QQChatLogWin->objectName().isEmpty())
            QQChatLogWin->setObjectName(QString::fromUtf8("QQChatLogWin"));
        QQChatLogWin->resize(629, 524);
        QQChatLogWin->setMinimumSize(QSize(400, 300));
        verticalLayout = new QVBoxLayout(QQChatLogWin);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        msgbrowse = new QTextEdit(QQChatLogWin);
        msgbrowse->setObjectName(QString::fromUtf8("msgbrowse"));

        verticalLayout->addWidget(msgbrowse);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(4);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btn_last = new QToolButton(QQChatLogWin);
        btn_last->setObjectName(QString::fromUtf8("btn_last"));

        horizontalLayout->addWidget(btn_last);

        btn_prep = new QToolButton(QQChatLogWin);
        btn_prep->setObjectName(QString::fromUtf8("btn_prep"));

        horizontalLayout->addWidget(btn_prep);

        le_curr_page = new QLineEdit(QQChatLogWin);
        le_curr_page->setObjectName(QString::fromUtf8("le_curr_page"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(le_curr_page->sizePolicy().hasHeightForWidth());
        le_curr_page->setSizePolicy(sizePolicy);
        le_curr_page->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(le_curr_page);

        lbl_page_count = new QLabel(QQChatLogWin);
        lbl_page_count->setObjectName(QString::fromUtf8("lbl_page_count"));

        horizontalLayout->addWidget(lbl_page_count);

        btn_next = new QToolButton(QQChatLogWin);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));

        horizontalLayout->addWidget(btn_next);

        btn_first = new QToolButton(QQChatLogWin);
        btn_first->setObjectName(QString::fromUtf8("btn_first"));

        horizontalLayout->addWidget(btn_first);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QQChatLogWin);

        QMetaObject::connectSlotsByName(QQChatLogWin);
    } // setupUi

    void retranslateUi(QWidget *QQChatLogWin)
    {
        QQChatLogWin->setWindowTitle(QApplication::translate("QQChatLogWin", "Form", 0, QApplication::UnicodeUTF8));
        btn_last->setText(QApplication::translate("QQChatLogWin", "<<", 0, QApplication::UnicodeUTF8));
        btn_prep->setText(QApplication::translate("QQChatLogWin", "<", 0, QApplication::UnicodeUTF8));
        lbl_page_count->setText(QApplication::translate("QQChatLogWin", "TextLabel", 0, QApplication::UnicodeUTF8));
        btn_next->setText(QApplication::translate("QQChatLogWin", ">", 0, QApplication::UnicodeUTF8));
        btn_first->setText(QApplication::translate("QQChatLogWin", ">>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQChatLogWin: public Ui_QQChatLogWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQCHATLOGWIN_H
