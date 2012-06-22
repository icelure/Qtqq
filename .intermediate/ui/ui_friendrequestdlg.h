/********************************************************************************
** Form generated from reading UI file 'friendrequestdlg.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FRIENDREQUESTDLG_H
#define UI_FRIENDREQUESTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_QQFriendRequestDlg
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_avatar_;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_account_;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QPlainTextEdit *pte_msg_;
    QRadioButton *rb_allow_and_add_;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QLineEdit *le_comment_;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *cb_group_;
    QSpacerItem *horizontalSpacer;
    QRadioButton *rb_allow_;
    QHBoxLayout *horizontalLayout_4;
    QRadioButton *rb_deny_;
    QLineEdit *le_deny_reason_;
    QFrame *line;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pb_ok_;
    QPushButton *pb_ignore_;

    void setupUi(QDialog *QQFriendRequestDlg)
    {
        if (QQFriendRequestDlg->objectName().isEmpty())
            QQFriendRequestDlg->setObjectName(QString::fromUtf8("QQFriendRequestDlg"));
        QQFriendRequestDlg->resize(326, 306);
        verticalLayout_2 = new QVBoxLayout(QQFriendRequestDlg);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_avatar_ = new QLabel(QQFriendRequestDlg);
        lbl_avatar_->setObjectName(QString::fromUtf8("lbl_avatar_"));

        horizontalLayout->addWidget(lbl_avatar_);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_account_ = new QLabel(QQFriendRequestDlg);
        lbl_account_->setObjectName(QString::fromUtf8("lbl_account_"));

        verticalLayout->addWidget(lbl_account_);

        label_2 = new QLabel(QQFriendRequestDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout);

        pte_msg_ = new QPlainTextEdit(QQFriendRequestDlg);
        pte_msg_->setObjectName(QString::fromUtf8("pte_msg_"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pte_msg_->sizePolicy().hasHeightForWidth());
        pte_msg_->setSizePolicy(sizePolicy);
        pte_msg_->setMinimumSize(QSize(0, 80));
        pte_msg_->setReadOnly(true);

        verticalLayout_2->addWidget(pte_msg_);

        rb_allow_and_add_ = new QRadioButton(QQFriendRequestDlg);
        rb_allow_and_add_->setObjectName(QString::fromUtf8("rb_allow_and_add_"));

        verticalLayout_2->addWidget(rb_allow_and_add_);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(30, -1, -1, -1);
        label_4 = new QLabel(QQFriendRequestDlg);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);

        le_comment_ = new QLineEdit(QQFriendRequestDlg);
        le_comment_->setObjectName(QString::fromUtf8("le_comment_"));

        horizontalLayout_2->addWidget(le_comment_);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(30, -1, -1, -1);
        label_3 = new QLabel(QQFriendRequestDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        cb_group_ = new QComboBox(QQFriendRequestDlg);
        cb_group_->setObjectName(QString::fromUtf8("cb_group_"));

        horizontalLayout_3->addWidget(cb_group_);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout_3);

        rb_allow_ = new QRadioButton(QQFriendRequestDlg);
        rb_allow_->setObjectName(QString::fromUtf8("rb_allow_"));

        verticalLayout_2->addWidget(rb_allow_);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        rb_deny_ = new QRadioButton(QQFriendRequestDlg);
        rb_deny_->setObjectName(QString::fromUtf8("rb_deny_"));

        horizontalLayout_4->addWidget(rb_deny_);

        le_deny_reason_ = new QLineEdit(QQFriendRequestDlg);
        le_deny_reason_->setObjectName(QString::fromUtf8("le_deny_reason_"));
        le_deny_reason_->setEnabled(false);

        horizontalLayout_4->addWidget(le_deny_reason_);


        verticalLayout_2->addLayout(horizontalLayout_4);

        line = new QFrame(QQFriendRequestDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        pb_ok_ = new QPushButton(QQFriendRequestDlg);
        pb_ok_->setObjectName(QString::fromUtf8("pb_ok_"));
        pb_ok_->setDefault(true);

        horizontalLayout_5->addWidget(pb_ok_);

        pb_ignore_ = new QPushButton(QQFriendRequestDlg);
        pb_ignore_->setObjectName(QString::fromUtf8("pb_ignore_"));

        horizontalLayout_5->addWidget(pb_ignore_);


        verticalLayout_2->addLayout(horizontalLayout_5);

#ifndef QT_NO_SHORTCUT
        label_4->setBuddy(le_comment_);
        label_3->setBuddy(cb_group_);
#endif // QT_NO_SHORTCUT

        retranslateUi(QQFriendRequestDlg);

        QMetaObject::connectSlotsByName(QQFriendRequestDlg);
    } // setupUi

    void retranslateUi(QDialog *QQFriendRequestDlg)
    {
        QQFriendRequestDlg->setWindowTitle(QApplication::translate("QQFriendRequestDlg", "Form", 0, QApplication::UnicodeUTF8));
        lbl_avatar_->setText(QString());
        lbl_account_->setText(QApplication::translate("QQFriendRequestDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QQFriendRequestDlg", "request to add you as friend!", 0, QApplication::UnicodeUTF8));
        rb_allow_and_add_->setText(QApplication::translate("QQFriendRequestDlg", "Allow and add", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QQFriendRequestDlg", "Comment:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QQFriendRequestDlg", "Group:", 0, QApplication::UnicodeUTF8));
        rb_allow_->setText(QApplication::translate("QQFriendRequestDlg", "Allow", 0, QApplication::UnicodeUTF8));
        rb_deny_->setText(QApplication::translate("QQFriendRequestDlg", "Deny", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        le_deny_reason_->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        le_deny_reason_->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
#ifndef QT_NO_ACCESSIBILITY
        le_deny_reason_->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        le_deny_reason_->setAccessibleDescription(QString());
#endif // QT_NO_ACCESSIBILITY
        le_deny_reason_->setInputMask(QString());
        le_deny_reason_->setPlaceholderText(QApplication::translate("QQFriendRequestDlg", "deny reason", 0, QApplication::UnicodeUTF8));
        pb_ok_->setText(QApplication::translate("QQFriendRequestDlg", "Ok", 0, QApplication::UnicodeUTF8));
        pb_ignore_->setText(QApplication::translate("QQFriendRequestDlg", "Ignore", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQFriendRequestDlg: public Ui_QQFriendRequestDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FRIENDREQUESTDLG_H
