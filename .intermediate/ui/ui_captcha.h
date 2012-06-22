/********************************************************************************
** Form generated from reading UI file 'captcha.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTCHA_H
#define UI_CAPTCHA_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_QQCaptcha
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *lbl_captcha_;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_captcha_;
    QPushButton *pb_confirm_;

    void setupUi(QDialog *QQCaptcha)
    {
        if (QQCaptcha->objectName().isEmpty())
            QQCaptcha->setObjectName(QString::fromUtf8("QQCaptcha"));
        QQCaptcha->resize(312, 115);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQCaptcha->sizePolicy().hasHeightForWidth());
        QQCaptcha->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QQCaptcha);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbl_captcha_ = new QLabel(QQCaptcha);
        lbl_captcha_->setObjectName(QString::fromUtf8("lbl_captcha_"));
        lbl_captcha_->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbl_captcha_);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(QQCaptcha);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        le_captcha_ = new QLineEdit(QQCaptcha);
        le_captcha_->setObjectName(QString::fromUtf8("le_captcha_"));

        horizontalLayout->addWidget(le_captcha_);


        horizontalLayout_2->addLayout(horizontalLayout);

        pb_confirm_ = new QPushButton(QQCaptcha);
        pb_confirm_->setObjectName(QString::fromUtf8("pb_confirm_"));

        horizontalLayout_2->addWidget(pb_confirm_);


        verticalLayout->addLayout(horizontalLayout_2);

#ifndef QT_NO_SHORTCUT
        label->setBuddy(le_captcha_);
#endif // QT_NO_SHORTCUT

        retranslateUi(QQCaptcha);
        QObject::connect(pb_confirm_, SIGNAL(clicked()), QQCaptcha, SLOT(accept()));

        QMetaObject::connectSlotsByName(QQCaptcha);
    } // setupUi

    void retranslateUi(QDialog *QQCaptcha)
    {
        QQCaptcha->setWindowTitle(QString());
        lbl_captcha_->setText(QApplication::translate("QQCaptcha", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QQCaptcha", "Captcha:", 0, QApplication::UnicodeUTF8));
        pb_confirm_->setText(QApplication::translate("QQCaptcha", "Confirm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQCaptcha: public Ui_QQCaptcha {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTCHA_H
