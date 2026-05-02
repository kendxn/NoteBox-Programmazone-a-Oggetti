/********************************************************************************
** Form generated from reading UI file 'startWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTWINDOW_H
#define UI_STARTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_startWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *buttonInizia;
    QPushButton *buttonImporta;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *startWindow)
    {
        if (startWindow->objectName().isEmpty())
            startWindow->setObjectName("startWindow");
        startWindow->resize(613, 536);
        startWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(220, 138, 221);"));
        horizontalLayout = new QHBoxLayout(startWindow);
        horizontalLayout->setObjectName("horizontalLayout");
        frame_5 = new QFrame(startWindow);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame = new QFrame(frame_5);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_3->addWidget(frame);

        frame_2 = new QFrame(frame_5);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalSpacer = new QSpacerItem(20, 179, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_3);
        verticalLayout->setObjectName("verticalLayout");
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(frame_4);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);


        verticalLayout->addWidget(frame_4);

        buttonInizia = new QPushButton(frame_3);
        buttonInizia->setObjectName("buttonInizia");

        verticalLayout->addWidget(buttonInizia);

        buttonImporta = new QPushButton(frame_3);
        buttonImporta->setObjectName("buttonImporta");

        verticalLayout->addWidget(buttonImporta);


        verticalLayout_2->addWidget(frame_3);

        verticalSpacer_2 = new QSpacerItem(20, 179, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);


        horizontalLayout_3->addWidget(frame_2);


        horizontalLayout->addWidget(frame_5);


        retranslateUi(startWindow);

        QMetaObject::connectSlotsByName(startWindow);
    } // setupUi

    void retranslateUi(QWidget *startWindow)
    {
        startWindow->setWindowTitle(QCoreApplication::translate("startWindow", "Form", nullptr));
        label->setText(QCoreApplication::translate("startWindow", "Benvenuto!", nullptr));
        buttonInizia->setText(QCoreApplication::translate("startWindow", "Inizia", nullptr));
        buttonImporta->setText(QCoreApplication::translate("startWindow", "Importa", nullptr));
    } // retranslateUi

};

namespace Ui {
    class startWindow: public Ui_startWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTWINDOW_H
