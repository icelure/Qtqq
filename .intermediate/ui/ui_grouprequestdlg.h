/********************************************************************************
** Form generated from reading UI file 'grouprequestdlg.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GROUPREQUESTDLG_H
#define UI_GROUPREQUESTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QQGroupRequestDlg
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lbl_avatar_;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_request_name_;
    QLabel *label_3;
    QLabel *lbl_group_name_;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_5;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *pte_msg_;
    QRadioButton *rb_allow_;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *rb_deny_;
    QLineEdit *le_deny_reason_;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pb_ok_;
    QPushButton *pb_ignore_;

    void setupUi(QDialog *QQGroupRequestDlg)
    {
        if (QQGroupRequestDlg->objectName().isEmpty())
            QQGroupRequestDlg->setObjectName(QString::fromUtf8("QQGroupRequestDlg"));
        QQGroupRequestDlg->resize(399, 266);
        verticalLayout_3 = new QVBoxLayout(QQGroupRequestDlg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lbl_avatar_ = new QLabel(QQGroupRequestDlg);
        lbl_avatar_->setObjectName(QString::fromUtf8("lbl_avatar_"));

        horizontalLayout_2->addWidget(lbl_avatar_);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_request_name_ = new QLabel(QQGroupRequestDlg);
        lbl_request_name_->setObjectName(QString::fromUtf8("lbl_request_name_"));

        horizontalLayout->addWidget(lbl_request_name_);

        label_3 = new QLabel(QQGroupRequestDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lbl_group_name_ = new QLabel(QQGroupRequestDlg);
        lbl_group_name_->setObjectName(QString::fromUtf8("lbl_group_name_"));

        horizontalLayout->addWidget(lbl_group_name_);


        verticalLayout->addLayout(horizontalLayout);

        label_5 = new QLabel(QQGroupRequestDlg);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);


        horizontalLayout_2->addLayout(verticalLayout);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pte_msg_ = new QPlainTextEdit(QQGroupRequestDlg);
        pte_msg_->setObjectName(QString::fromUtf8("pte_msg_"));

        verticalLayout_2->addWidget(pte_msg_);

        rb_allow_ = new QRadioButton(QQGroupRequestDlg);
        rb_allow_->setObjectName(QString::fromUtf8("rb_allow_"));

        verticalLayout_2->addWidget(rb_allow_);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        rb_deny_ = new QRadioButton(QQGroupRequestDlg);
        rb_deny_->setObjectName(QString::fromUtf8("rb_deny_"));

        horizontalLayout_3->addWidget(rb_deny_);

        le_deny_reason_ = new QLineEdit(QQGroupRequestDlg);
        le_deny_reason_->setObjectName(QString::fromUtf8("le_deny_reason_"));
        le_deny_reason_->setEnabled(false);

        horizontalLayout_3->addWidget(le_deny_reason_);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addLayout(horizontalLayout_3);


        horizontalLayout_5->addLayout(verticalLayout_2);


        verticalLayout_3->addLayout(horizontalLayout_5);

        line = new QFrame(QQGroupRequestDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pb_ok_ = new QPushButton(QQGroupRequestDlg);
        pb_ok_->setObjectName(QString::fromUtf8("pb_ok_"));

        horizontalLayout_4->addWidget(pb_ok_);

        pb_ignore_ = new QPushButton(QQGroupRequestDlg);
        pb_ignore_->setObjectName(QString::fromUtf8("pb_ignore_"));

        horizontalLayout_4->addWidget(pb_ignore_);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(QQGroupRequestDlg);

        QMetaObject::connectSlotsByName(QQGroupRequestDlg);
    } // setupUi

    void retranslateUi(QDialog *QQGroupRequestDlg)
    {
        QQGroupRequestDlg->setWindowTitle(QApplication::translate("QQGroupRequestDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        lbl_avatar_->setText(QApplication::translate("QQGroupRequestDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl_request_name_->setText(QApplication::translate("QQGroupRequestDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QQGroupRequestDlg", "request to enter group", 0, QApplication::UnicodeUTF8));
        lbl_group_name_->setText(QApplication::translate("QQGroupRequestDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QQGroupRequestDlg", "Addition infomation:", 0, QApplication::UnicodeUTF8));
        rb_allow_->setText(QApplication::translate("QQGroupRequestDlg", "Allow", 0, QApplication::UnicodeUTF8));
        rb_deny_->setText(QApplication::translate("QQGroupRequestDlg", "Deny", 0, QApplication::UnicodeUTF8));
        pb_ok_->setText(QApplication::translate("QQGroupRequestDlg", "Ok", 0, QApplication::UnicodeUTF8));
        pb_ignore_->setText(QApplication::translate("QQGroupRequestDlg", "Ignore", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQGroupRequestDlg: public Ui_QQGroupRequestDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GROUPREQUESTDLG_H
