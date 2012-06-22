/********************************************************************************
** Form generated from reading UI file 'qqfacepanel.ui'
**
** Created: Fri Jun 22 12:45:17 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QQFACEPANEL_H
#define UI_QQFACEPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QQFacePanel
{
public:
    QVBoxLayout *verticalLayout;
    QTableWidget *tbw_qqface_;

    void setupUi(QWidget *QQFacePanel)
    {
        if (QQFacePanel->objectName().isEmpty())
            QQFacePanel->setObjectName(QString::fromUtf8("QQFacePanel"));
        QQFacePanel->resize(463, 279);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(QQFacePanel->sizePolicy().hasHeightForWidth());
        QQFacePanel->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(QQFacePanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tbw_qqface_ = new QTableWidget(QQFacePanel);
        tbw_qqface_->setObjectName(QString::fromUtf8("tbw_qqface_"));
        tbw_qqface_->setGridStyle(Qt::DotLine);
        tbw_qqface_->horizontalHeader()->setVisible(false);
        tbw_qqface_->horizontalHeader()->setDefaultSectionSize(30);
        tbw_qqface_->horizontalHeader()->setMinimumSectionSize(30);
        tbw_qqface_->verticalHeader()->setVisible(false);
        tbw_qqface_->verticalHeader()->setMinimumSectionSize(30);

        verticalLayout->addWidget(tbw_qqface_);


        retranslateUi(QQFacePanel);

        QMetaObject::connectSlotsByName(QQFacePanel);
    } // setupUi

    void retranslateUi(QWidget *QQFacePanel)
    {
        QQFacePanel->setWindowTitle(QApplication::translate("QQFacePanel", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QQFacePanel: public Ui_QQFacePanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QQFACEPANEL_H
