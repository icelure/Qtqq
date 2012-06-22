/********************************************************************************
** Form generated from reading UI file 'qqmainwindow.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQMAINWINDOW_H
#define UI_QQMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQMainWindow
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *vlo_main;
    QVBoxLayout *top_v_layout_;
    QGridLayout *gridLayout;
    QToolButton *avatar;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QComboBox *cb_status_;
    QLabel *lbl_name_;
    QLabel *lbl_leave_;
    QLineEdit *le_mood_;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *le_search_;
    QPushButton *pb_search_;
    QTabWidget *tab_main_;
    QWidget *friends;
    QVBoxLayout *verticalLayout_5;
    QTreeView *tv_friendlist_;
    QWidget *groups;
    QVBoxLayout *verticalLayout_3;
    QListView *lv_grouplist_;
    QWidget *recents;
    QVBoxLayout *verticalLayout_4;
    QListView *lv_recentlist_;
    QFrame *frame_mainwin_bottom;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pb_mainmenu_;
    QFrame *line;
    QToolButton *toolButton_2;
    QToolButton *toolButton;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *QQMainWindow)
    {
        if (QQMainWindow->objectName().isEmpty())
            QQMainWindow->setObjectName(QString::fromUtf8("QQMainWindow"));
        QQMainWindow->resize(265, 528);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQMainWindow->sizePolicy().hasHeightForWidth());
        QQMainWindow->setSizePolicy(sizePolicy);
        QQMainWindow->setMinimumSize(QSize(265, 525));
        QQMainWindow->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(QQMainWindow);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        vlo_main = new QVBoxLayout();
        vlo_main->setSpacing(6);
        vlo_main->setObjectName(QString::fromUtf8("vlo_main"));
        vlo_main->setContentsMargins(-1, 10, -1, -1);
        top_v_layout_ = new QVBoxLayout();
        top_v_layout_->setObjectName(QString::fromUtf8("top_v_layout_"));
        top_v_layout_->setSizeConstraint(QLayout::SetMinimumSize);
        top_v_layout_->setContentsMargins(0, -1, 0, -1);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(6, -1, 6, -1);
        avatar = new QToolButton(QQMainWindow);
        avatar->setObjectName(QString::fromUtf8("avatar"));
        avatar->setMinimumSize(QSize(40, 40));
        avatar->setStyleSheet(QString::fromUtf8(""));
        avatar->setIconSize(QSize(40, 40));

        gridLayout->addWidget(avatar, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb_status_ = new QComboBox(QQMainWindow);
        cb_status_->setObjectName(QString::fromUtf8("cb_status_"));
        cb_status_->setFocusPolicy(Qt::NoFocus);
        cb_status_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(cb_status_);

        lbl_name_ = new QLabel(QQMainWindow);
        lbl_name_->setObjectName(QString::fromUtf8("lbl_name_"));
        lbl_name_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lbl_name_);

        lbl_leave_ = new QLabel(QQMainWindow);
        lbl_leave_->setObjectName(QString::fromUtf8("lbl_leave_"));
        lbl_leave_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(lbl_leave_);


        verticalLayout->addLayout(horizontalLayout);

        le_mood_ = new QLineEdit(QQMainWindow);
        le_mood_->setObjectName(QString::fromUtf8("le_mood_"));
        le_mood_->setStyleSheet(QString::fromUtf8(""));

        verticalLayout->addWidget(le_mood_);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);


        top_v_layout_->addLayout(gridLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        le_search_ = new QLineEdit(QQMainWindow);
        le_search_->setObjectName(QString::fromUtf8("le_search_"));
        le_search_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(le_search_);

        pb_search_ = new QPushButton(QQMainWindow);
        pb_search_->setObjectName(QString::fromUtf8("pb_search_"));
        pb_search_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_4->addWidget(pb_search_);


        top_v_layout_->addLayout(horizontalLayout_4);


        vlo_main->addLayout(top_v_layout_);

        tab_main_ = new QTabWidget(QQMainWindow);
        tab_main_->setObjectName(QString::fromUtf8("tab_main_"));
        tab_main_->setStyleSheet(QString::fromUtf8(""));
        tab_main_->setTabPosition(QTabWidget::North);
        tab_main_->setTabShape(QTabWidget::Rounded);
        tab_main_->setElideMode(Qt::ElideLeft);
        tab_main_->setUsesScrollButtons(false);
        tab_main_->setDocumentMode(false);
        tab_main_->setMovable(true);
        friends = new QWidget();
        friends->setObjectName(QString::fromUtf8("friends"));
        verticalLayout_5 = new QVBoxLayout(friends);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        tv_friendlist_ = new QTreeView(friends);
        tv_friendlist_->setObjectName(QString::fromUtf8("tv_friendlist_"));
        tv_friendlist_->header()->setVisible(false);

        verticalLayout_5->addWidget(tv_friendlist_);

        tab_main_->addTab(friends, QString());
        groups = new QWidget();
        groups->setObjectName(QString::fromUtf8("groups"));
        verticalLayout_3 = new QVBoxLayout(groups);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        lv_grouplist_ = new QListView(groups);
        lv_grouplist_->setObjectName(QString::fromUtf8("lv_grouplist_"));

        verticalLayout_3->addWidget(lv_grouplist_);

        tab_main_->addTab(groups, QString());
        recents = new QWidget();
        recents->setObjectName(QString::fromUtf8("recents"));
        verticalLayout_4 = new QVBoxLayout(recents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        lv_recentlist_ = new QListView(recents);
        lv_recentlist_->setObjectName(QString::fromUtf8("lv_recentlist_"));

        verticalLayout_4->addWidget(lv_recentlist_);

        tab_main_->addTab(recents, QString());

        vlo_main->addWidget(tab_main_);


        verticalLayout_2->addLayout(vlo_main);

        frame_mainwin_bottom = new QFrame(QQMainWindow);
        frame_mainwin_bottom->setObjectName(QString::fromUtf8("frame_mainwin_bottom"));
        frame_mainwin_bottom->setMinimumSize(QSize(0, 40));
        frame_mainwin_bottom->setFrameShape(QFrame::StyledPanel);
        frame_mainwin_bottom->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_mainwin_bottom);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setSizeConstraint(QLayout::SetDefaultConstraint);
        pb_mainmenu_ = new QPushButton(frame_mainwin_bottom);
        pb_mainmenu_->setObjectName(QString::fromUtf8("pb_mainmenu_"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pb_mainmenu_->sizePolicy().hasHeightForWidth());
        pb_mainmenu_->setSizePolicy(sizePolicy1);
        pb_mainmenu_->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(pb_mainmenu_);

        line = new QFrame(frame_mainwin_bottom);
        line->setObjectName(QString::fromUtf8("line"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);

        toolButton_2 = new QToolButton(frame_mainwin_bottom);
        toolButton_2->setObjectName(QString::fromUtf8("toolButton_2"));
        toolButton_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(toolButton_2);

        toolButton = new QToolButton(frame_mainwin_bottom);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(toolButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);


        verticalLayout_6->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(frame_mainwin_bottom);


        retranslateUi(QQMainWindow);

        tab_main_->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(QQMainWindow);
    } // setupUi

    void retranslateUi(QWidget *QQMainWindow)
    {
        QQMainWindow->setWindowTitle(QApplication::translate("QQMainWindow", "LinuxQQ", 0, QApplication::UnicodeUTF8));
        avatar->setText(QString());
        lbl_name_->setText(QApplication::translate("QQMainWindow", "LinuxQQ", 0, QApplication::UnicodeUTF8));
        lbl_leave_->setText(QApplication::translate("QQMainWindow", "Lv", 0, QApplication::UnicodeUTF8));
        pb_search_->setText(QApplication::translate("QQMainWindow", "Search", 0, QApplication::UnicodeUTF8));
        tab_main_->setTabText(tab_main_->indexOf(friends), QApplication::translate("QQMainWindow", "Friends", 0, QApplication::UnicodeUTF8));
        tab_main_->setTabText(tab_main_->indexOf(groups), QApplication::translate("QQMainWindow", "Groups", 0, QApplication::UnicodeUTF8));
        tab_main_->setTabText(tab_main_->indexOf(recents), QApplication::translate("QQMainWindow", "Recents", 0, QApplication::UnicodeUTF8));
        pb_mainmenu_->setText(QApplication::translate("QQMainWindow", "MainMenu", 0, QApplication::UnicodeUTF8));
        toolButton_2->setText(QString());
        toolButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QQMainWindow: public Ui_QQMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQMAINWINDOW_H
