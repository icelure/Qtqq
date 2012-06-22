/********************************************************************************
** Form generated from reading UI file 'qqloginwin.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQLOGINWIN_H
#define UI_QQLOGINWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQLoginWin
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QCheckBox *cekb_autologin_;
    QLineEdit *le_password_;
    QCheckBox *cekb_rem_pwd_;
    QLabel *lbl_logo;
    QComboBox *comb_username_;
    QComboBox *cb_status_;
    QFrame *frame_login_btm;
    QPushButton *pb_login;

    void setupUi(QWidget *QQLoginWin)
    {
        if (QQLoginWin->objectName().isEmpty())
            QQLoginWin->setObjectName(QString::fromUtf8("QQLoginWin"));
        QQLoginWin->resize(350, 231);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQLoginWin->sizePolicy().hasHeightForWidth());
        QQLoginWin->setSizePolicy(sizePolicy);
        QQLoginWin->setMinimumSize(QSize(350, 220));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        QQLoginWin->setFont(font);
        QQLoginWin->setWindowOpacity(1);
        QQLoginWin->setStyleSheet(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(QQLoginWin);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new QFrame(QQLoginWin);
        frame->setObjectName(QString::fromUtf8("frame"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy1);
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame->setLineWidth(0);
        cekb_autologin_ = new QCheckBox(frame);
        cekb_autologin_->setObjectName(QString::fromUtf8("cekb_autologin_"));
        cekb_autologin_->setGeometry(QRect(250, 150, 82, 20));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(cekb_autologin_->sizePolicy().hasHeightForWidth());
        cekb_autologin_->setSizePolicy(sizePolicy2);
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(8);
        cekb_autologin_->setFont(font1);
        cekb_autologin_->setStyleSheet(QString::fromUtf8(""));
        le_password_ = new QLineEdit(frame);
        le_password_->setObjectName(QString::fromUtf8("le_password_"));
        le_password_->setGeometry(QRect(100, 120, 161, 23));
        le_password_->setFont(font);
        le_password_->setStyleSheet(QString::fromUtf8(""));
        le_password_->setEchoMode(QLineEdit::Password);
        cekb_rem_pwd_ = new QCheckBox(frame);
        cekb_rem_pwd_->setObjectName(QString::fromUtf8("cekb_rem_pwd_"));
        cekb_rem_pwd_->setGeometry(QRect(100, 150, 131, 20));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(cekb_rem_pwd_->sizePolicy().hasHeightForWidth());
        cekb_rem_pwd_->setSizePolicy(sizePolicy3);
        cekb_rem_pwd_->setFont(font1);
        cekb_rem_pwd_->setStyleSheet(QString::fromUtf8(""));
        lbl_logo = new QLabel(frame);
        lbl_logo->setObjectName(QString::fromUtf8("lbl_logo"));
        lbl_logo->setGeometry(QRect(90, 20, 181, 61));
        lbl_logo->setStyleSheet(QString::fromUtf8(""));
        lbl_logo->setPixmap(QPixmap(QString::fromUtf8(":/new/login/images/LoginPanel/StdLoginBanner.png")));
        comb_username_ = new QComboBox(frame);
        comb_username_->setObjectName(QString::fromUtf8("comb_username_"));
        comb_username_->setGeometry(QRect(100, 90, 160, 24));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        font2.setBold(false);
        font2.setWeight(50);
        comb_username_->setFont(font2);
        comb_username_->setStyleSheet(QString::fromUtf8(""));
        comb_username_->setEditable(true);
        comb_username_->setIconSize(QSize(20, 20));
        cb_status_ = new QComboBox(frame);
        cb_status_->setObjectName(QString::fromUtf8("cb_status_"));
        cb_status_->setGeometry(QRect(20, 150, 69, 22));
        cb_status_->setFont(font1);

        verticalLayout->addWidget(frame);

        frame_login_btm = new QFrame(QQLoginWin);
        frame_login_btm->setObjectName(QString::fromUtf8("frame_login_btm"));
        QSizePolicy sizePolicy4(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(frame_login_btm->sizePolicy().hasHeightForWidth());
        frame_login_btm->setSizePolicy(sizePolicy4);
        frame_login_btm->setMinimumSize(QSize(0, 40));
        frame_login_btm->setFrameShape(QFrame::StyledPanel);
        frame_login_btm->setFrameShadow(QFrame::Raised);
        frame_login_btm->setLineWidth(0);
        pb_login = new QPushButton(frame_login_btm);
        pb_login->setObjectName(QString::fromUtf8("pb_login"));
        pb_login->setGeometry(QRect(281, 7, 50, 25));
        sizePolicy2.setHeightForWidth(pb_login->sizePolicy().hasHeightForWidth());
        pb_login->setSizePolicy(sizePolicy2);
        pb_login->setFont(font1);
        pb_login->setLayoutDirection(Qt::LeftToRight);
        pb_login->setStyleSheet(QString::fromUtf8(""));
        pb_login->setDefault(true);

        verticalLayout->addWidget(frame_login_btm);

        QWidget::setTabOrder(comb_username_, le_password_);
        QWidget::setTabOrder(le_password_, pb_login);
        QWidget::setTabOrder(pb_login, cekb_rem_pwd_);
        QWidget::setTabOrder(cekb_rem_pwd_, cekb_autologin_);
        QWidget::setTabOrder(cekb_autologin_, cb_status_);

        retranslateUi(QQLoginWin);

        QMetaObject::connectSlotsByName(QQLoginWin);
    } // setupUi

    void retranslateUi(QWidget *QQLoginWin)
    {
        QQLoginWin->setWindowTitle(QString());
        cekb_autologin_->setText(QApplication::translate("QQLoginWin", "Auto Login", 0, QApplication::UnicodeUTF8));
        cekb_rem_pwd_->setText(QApplication::translate("QQLoginWin", "Remember Password", 0, QApplication::UnicodeUTF8));
        lbl_logo->setText(QString());
        pb_login->setText(QApplication::translate("QQLoginWin", "Login", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQLoginWin: public Ui_QQLoginWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQLOGINWIN_H
