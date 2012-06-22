/********************************************************************************
** Form generated from reading UI file 'qqgroupchatdlg.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQGROUPCHATDLG_H
#define UI_QQGROUPCHATDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSplitter>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQGroupChatDlg
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *lbl_avatar_;
    QVBoxLayout *verticalLayout;
    QLabel *lbl_name_;
    QLabel *lbl_category_;
    QHBoxLayout *horizontalLayout_2;
    QToolButton *toolButton;
    QToolButton *toolButton_2;
    QToolButton *toolButton_3;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QSplitter *splitter_main;
    QSplitter *splitter_left_;
    QWidget *layoutWidget;
    QVBoxLayout *v_layout_left_;
    QHBoxLayout *horizontalLayout_4;
    QToolButton *toolButton_4;
    QToolButton *btn_qqface;
    QToolButton *btn_send_img;
    QToolButton *toolButton_8;
    QToolButton *toolButton_9;
    QSpacerItem *horizontalSpacer_2;
    QToolButton *btn_chat_log;
    QFrame *frame_chatdlg_bottom;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *btn_close;
    QPushButton *btn_send_msg;
    QToolButton *btn_send_key;
    QSplitter *splitter_right_;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_4;
    QLabel *label_5;
    QListView *lv_members_;

    void setupUi(QWidget *QQGroupChatDlg)
    {
        if (QQGroupChatDlg->objectName().isEmpty())
            QQGroupChatDlg->setObjectName(QString::fromUtf8("QQGroupChatDlg"));
        QQGroupChatDlg->resize(628, 578);
        QQGroupChatDlg->setMinimumSize(QSize(620, 500));
        QQGroupChatDlg->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(QQGroupChatDlg);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lbl_avatar_ = new QLabel(QQGroupChatDlg);
        lbl_avatar_->setObjectName(QString::fromUtf8("lbl_avatar_"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lbl_avatar_->sizePolicy().hasHeightForWidth());
        lbl_avatar_->setSizePolicy(sizePolicy);
        lbl_avatar_->setMargin(5);

        horizontalLayout->addWidget(lbl_avatar_);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_name_ = new QLabel(QQGroupChatDlg);
        lbl_name_->setObjectName(QString::fromUtf8("lbl_name_"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lbl_name_->sizePolicy().hasHeightForWidth());
        lbl_name_->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lbl_name_->setFont(font);

        verticalLayout->addWidget(lbl_name_);

        lbl_category_ = new QLabel(QQGroupChatDlg);
        lbl_category_->setObjectName(QString::fromUtf8("lbl_category_"));

        verticalLayout->addWidget(lbl_category_);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_6->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        toolButton = new QToolButton(QQGroupChatDlg);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));

        horizontalLayout_2->addWidget(toolButton);

        toolButton_2 = new QToolButton(QQGroupChatDlg);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));

        horizontalLayout_2->addWidget(toolButton_2);

        toolButton_3 = new QToolButton(QQGroupChatDlg);
        toolButton_3->setObjectName(QString::fromUtf8("toolButton_3"));

        horizontalLayout_2->addWidget(toolButton_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);

        line = new QFrame(QQGroupChatDlg);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_4->addWidget(line);

        splitter_main = new QSplitter(QQGroupChatDlg);
        splitter_main->setObjectName(QString::fromUtf8("splitter_main"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(splitter_main->sizePolicy().hasHeightForWidth());
        splitter_main->setSizePolicy(sizePolicy2);
        splitter_main->setStyleSheet(QString::fromUtf8(""));
        splitter_main->setOrientation(Qt::Horizontal);
        splitter_main->setHandleWidth(4);
        splitter_left_ = new QSplitter(splitter_main);
        splitter_left_->setObjectName(QString::fromUtf8("splitter_left_"));
        splitter_left_->setOrientation(Qt::Vertical);
        splitter_left_->setHandleWidth(4);
        layoutWidget = new QWidget(splitter_left_);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        v_layout_left_ = new QVBoxLayout(layoutWidget);
        v_layout_left_->setSpacing(0);
        v_layout_left_->setObjectName(QString::fromUtf8("v_layout_left_"));
        v_layout_left_->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        toolButton_4 = new QToolButton(layoutWidget);
        toolButton_4->setObjectName(QString::fromUtf8("toolButton_4"));
        toolButton_4->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(toolButton_4);

        btn_qqface = new QToolButton(layoutWidget);
        btn_qqface->setObjectName(QString::fromUtf8("btn_qqface"));
        btn_qqface->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(btn_qqface);

        btn_send_img = new QToolButton(layoutWidget);
        btn_send_img->setObjectName(QString::fromUtf8("btn_send_img"));
        btn_send_img->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(btn_send_img);

        toolButton_8 = new QToolButton(layoutWidget);
        toolButton_8->setObjectName(QString::fromUtf8("toolButton_8"));
        toolButton_8->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(toolButton_8);

        toolButton_9 = new QToolButton(layoutWidget);
        toolButton_9->setObjectName(QString::fromUtf8("toolButton_9"));
        toolButton_9->setIconSize(QSize(18, 18));

        horizontalLayout_4->addWidget(toolButton_9);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        btn_chat_log = new QToolButton(layoutWidget);
        btn_chat_log->setObjectName(QString::fromUtf8("btn_chat_log"));

        horizontalLayout_4->addWidget(btn_chat_log);


        v_layout_left_->addLayout(horizontalLayout_4);

        frame_chatdlg_bottom = new QFrame(layoutWidget);
        frame_chatdlg_bottom->setObjectName(QString::fromUtf8("frame_chatdlg_bottom"));
        frame_chatdlg_bottom->setFrameShape(QFrame::StyledPanel);
        frame_chatdlg_bottom->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_chatdlg_bottom);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        btn_close = new QPushButton(frame_chatdlg_bottom);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));

        horizontalLayout_3->addWidget(btn_close);

        btn_send_msg = new QPushButton(frame_chatdlg_bottom);
        btn_send_msg->setObjectName(QString::fromUtf8("btn_send_msg"));
        btn_send_msg->setDefault(true);

        horizontalLayout_3->addWidget(btn_send_msg);

        btn_send_key = new QToolButton(frame_chatdlg_bottom);
        btn_send_key->setObjectName(QString::fromUtf8("btn_send_key"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btn_send_key->sizePolicy().hasHeightForWidth());
        btn_send_key->setSizePolicy(sizePolicy3);
        btn_send_key->setPopupMode(QToolButton::InstantPopup);
        btn_send_key->setToolButtonStyle(Qt::ToolButtonIconOnly);
        btn_send_key->setArrowType(Qt::DownArrow);

        horizontalLayout_3->addWidget(btn_send_key);


        verticalLayout_3->addLayout(horizontalLayout_3);


        v_layout_left_->addWidget(frame_chatdlg_bottom);

        splitter_left_->addWidget(layoutWidget);
        splitter_main->addWidget(splitter_left_);
        splitter_right_ = new QSplitter(splitter_main);
        splitter_right_->setObjectName(QString::fromUtf8("splitter_right_"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(splitter_right_->sizePolicy().hasHeightForWidth());
        splitter_right_->setSizePolicy(sizePolicy4);
        splitter_right_->setMinimumSize(QSize(170, 0));
        splitter_right_->setOrientation(Qt::Vertical);
        splitter_right_->setHandleWidth(4);
        layoutWidget1 = new QWidget(splitter_right_);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        splitter_right_->addWidget(layoutWidget1);
        lv_members_ = new QListView(splitter_right_);
        lv_members_->setObjectName(QString::fromUtf8("lv_members_"));
        lv_members_->setMinimumSize(QSize(160, 0));
        lv_members_->setIconSize(QSize(30, 30));
        splitter_right_->addWidget(lv_members_);
        splitter_main->addWidget(splitter_right_);

        verticalLayout_4->addWidget(splitter_main);

        splitter_main->raise();
        line->raise();

        retranslateUi(QQGroupChatDlg);

        QMetaObject::connectSlotsByName(QQGroupChatDlg);
    } // setupUi

    void retranslateUi(QWidget *QQGroupChatDlg)
    {
        QQGroupChatDlg->setWindowTitle(QApplication::translate("QQGroupChatDlg", "Dialog", 0, QApplication::UnicodeUTF8));
        lbl_avatar_->setText(QApplication::translate("QQGroupChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl_name_->setText(QApplication::translate("QQGroupChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        lbl_category_->setText(QApplication::translate("QQGroupChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QString());
        toolButton_2->setText(QString());
        toolButton_3->setText(QString());
        toolButton_4->setText(QString());
        btn_qqface->setText(QString());
        btn_send_img->setText(QString());
        toolButton_8->setText(QString());
        toolButton_9->setText(QString());
        btn_chat_log->setText(QApplication::translate("QQGroupChatDlg", "\346\266\210\346\201\257\350\256\260\345\275\225", 0, QApplication::UnicodeUTF8));
        btn_close->setText(QApplication::translate("QQGroupChatDlg", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
        btn_send_msg->setText(QApplication::translate("QQGroupChatDlg", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        btn_send_key->setText(QApplication::translate("QQGroupChatDlg", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QQGroupChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QQGroupChatDlg", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQGroupChatDlg: public Ui_QQGroupChatDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQGROUPCHATDLG_H
