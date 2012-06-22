/********************************************************************************
** Form generated from reading UI file 'qqfriendchatdlg.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQFRIENDCHATDLG_H
#define UI_QQFRIENDCHATDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQFriendChatDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_avatar_;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_name_;
    QLabel *lbl_mood_;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer;
    QFrame *second_line_;
    QSplitter *splitter_main;
    QWidget *layoutWidget;
    QVBoxLayout *vlo_main;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton_4;
    QToolButton *btn_qqface;
    QToolButton *btn_send_img;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_chat_log;
    QFrame *frame_chatdlg_bottom;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_close;
    QPushButton *btn_send_msg;
    QToolButton *btn_send_key;

    void setupUi(QWidget *QQFriendChatDlg)
    {
        if (QQFriendChatDlg->objectName().isEmpty())
            QQFriendChatDlg->setObjectName(QString::fromUtf8("QQFriendChatDlg"));
        QQFriendChatDlg->resize(508, 453);
        QQFriendChatDlg->setMinimumSize(QSize(500, 450));
        QQFriendChatDlg->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(QQFriendChatDlg);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(3, -1, -1, -1);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_avatar_ = new QLabel(QQFriendChatDlg);
        lbl_avatar_->setObjectName(QString::fromUtf8("lbl_avatar_"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_avatar_->sizePolicy().hasHeightForWidth());
        lbl_avatar_->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(lbl_avatar_);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, -1, -1, -1);
        lbl_name_ = new QLabel(QQFriendChatDlg);
        lbl_name_->setObjectName(QString::fromUtf8("lbl_name_"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbl_name_->setFont(font);

        verticalLayout->addWidget(lbl_name_);

        lbl_mood_ = new QLabel(QQFriendChatDlg);
        lbl_mood_->setObjectName(QString::fromUtf8("lbl_mood_"));

        verticalLayout->addWidget(lbl_mood_);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(3, -1, -1, 3);
        toolButton = new QToolButton(QQFriendChatDlg);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(QQFriendChatDlg);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(QQFriendChatDlg);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        horizontalLayout_2->addWidget(toolButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        second_line_ = new QFrame(QQFriendChatDlg);
        second_line_->setObjectName(QString::fromUtf8("second_line_"));
        second_line_->setFrameShape(QFrame::HLine);
        second_line_->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(second_line_);

        splitter_main = new QSplitter(QQFriendChatDlg);
        splitter_main->setObjectName(QString::fromUtf8("splitter_main"));
        splitter_main->setOrientation(Qt::Vertical);
        splitter_main->setHandleWidth(4);
        layoutWidget = new QWidget(splitter_main);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        vlo_main = new QVBoxLayout(layoutWidget);
        vlo_main->setSpacing(0);
        vlo_main->setObjectName(QString::fromUtf8("vlo_main"));
        vlo_main->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton_4 = new QToolButton(layoutWidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(toolButton_4);

        btn_qqface = new QToolButton(layoutWidget);
        btn_qqface->setObjectName(QString::fromUtf8("btn_qqface"));
        btn_qqface->setStyleSheet(QString::fromUtf8(""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("images/ui/chatdialog/qqface.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_qqface->setIcon(icon);
        btn_qqface->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(btn_qqface);

        btn_send_img = new QToolButton(layoutWidget);
        btn_send_img->setObjectName(QString::fromUtf8("btn_send_img"));
        sizePolicy.setHeightForWidth(btn_send_img->sizePolicy().hasHeightForWidth());
        btn_send_img->setSizePolicy(sizePolicy);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("images/ui/chatdialog/sendimg.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_send_img->setIcon(icon1);
        btn_send_img->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(btn_send_img);

        toolButton_8 = new QToolButton(layoutWidget);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(layoutWidget);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        toolButton_9->setIconSize(QSize(18, 18));

        horizontalLayout_3->addWidget(toolButton_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btn_chat_log = new QToolButton(layoutWidget);
        btn_chat_log->setObjectName(QString::fromUtf8("btn_chat_log"));

        horizontalLayout_3->addWidget(btn_chat_log);


        vlo_main->addLayout(horizontalLayout_3);

        frame_chatdlg_bottom = new QFrame(layoutWidget);
        frame_chatdlg_bottom->setObjectName(QString::fromUtf8("frame_chatdlg_bottom"));
        frame_chatdlg_bottom->setFrameShape(QFrame::StyledPanel);
        frame_chatdlg_bottom->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_chatdlg_bottom);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, -1, 0, 0);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);

        btn_close = new QPushButton(frame_chatdlg_bottom);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        horizontalLayout_4->addWidget(btn_close);

        btn_send_msg = new QPushButton(frame_chatdlg_bottom);
        btn_send_msg->setObjectName(QString::fromUtf8("btn_send_msg"));
        btn_send_msg->setDefault(true);

        horizontalLayout_4->addWidget(btn_send_msg);

        btn_send_key = new QToolButton(frame_chatdlg_bottom);
        btn_send_key->setObjectName(QString::fromUtf8("btn_send_key"));
        btn_send_key->setPopupMode(QToolButton::InstantPopup);
        btn_send_key->setArrowType(Qt::DownArrow);

        horizontalLayout_4->addWidget(btn_send_key);


        verticalLayout_2->addLayout(horizontalLayout_4);


        vlo_main->addWidget(frame_chatdlg_bottom);

        splitter_main->addWidget(layoutWidget);

        verticalLayout_4->addWidget(splitter_main);

        second_line_->raise();
        splitter_main->raise();

        retranslateUi(QQFriendChatDlg);

        QMetaObject::connectSlotsByName(QQFriendChatDlg);
    } // setupUi

    void retranslateUi(QWidget *QQFriendChatDlg)
    {
        QQFriendChatDlg->setWindowTitle(QApplication::translate("QQFriendChatDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        lbl_avatar_->setText(QApplication::translate("QQFriendChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl_name_->setText(QApplication::translate("QQFriendChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl_mood_->setText(QApplication::translate("QQFriendChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        btn_qqface->setText(QApplication::translate("QQFriendChatDlg", "...", 0, QApplication::UnicodeUTF8));
        btn_send_img->setText(QApplication::translate("QQFriendChatDlg", "...", 0, QApplication::UnicodeUTF8));
        toolButton_8->setText(QString());
        toolButton_9->setText(QString());
        btn_chat_log->setText(QApplication::translate("QQFriendChatDlg", "\346\266\210\346\201\257\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("QQFriendChatDlg", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btn_send_msg->setText(QApplication::translate("QQFriendChatDlg", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        btn_send_key->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQFriendChatDlg: public Ui_QQFriendChatDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQFRIENDCHATDLG_H
