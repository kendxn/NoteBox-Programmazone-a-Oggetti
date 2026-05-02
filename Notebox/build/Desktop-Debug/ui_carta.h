/********************************************************************************
** Form generated from reading UI file 'carta.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTA_H
#define UI_CARTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_carta
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;
    QFrame *imgFrame;
    QFrame *frame_3;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *carta)
    {
        if (carta->objectName().isEmpty())
            carta->setObjectName("carta");
        carta->resize(941, 638);
        carta->setStyleSheet(QString::fromUtf8("background-color:rgb(153, 193, 241);"));
        verticalLayout = new QVBoxLayout(carta);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(carta);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 50));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(frame_4);
        label->setObjectName("label");
        label->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(553, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_3->addWidget(frame_4);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 887, 670));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_2);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(407, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout_2->addWidget(frame_2);

        imgFrame = new QFrame(scrollAreaWidgetContents);
        imgFrame->setObjectName("imgFrame");
        imgFrame->setMinimumSize(QSize(0, 300));
        imgFrame->setFrameShape(QFrame::Shape::StyledPanel);
        imgFrame->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(imgFrame);

        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 300));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);

        verticalLayout_2->addWidget(frame_3);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(scrollArea);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 50));
        frame_5->setMaximumSize(QSize(16777215, 50));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        pushButton = new QPushButton(frame_5);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame_5);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_3->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame_5);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout_3->addWidget(pushButton_3);


        verticalLayout_3->addWidget(frame_5);


        verticalLayout->addWidget(frame);


        retranslateUi(carta);

        QMetaObject::connectSlotsByName(carta);
    } // setupUi

    void retranslateUi(QWidget *carta)
    {
        carta->setWindowTitle(QCoreApplication::translate("carta", "Form", nullptr));
        label->setText(QCoreApplication::translate("carta", "titolo", nullptr));
        label_2->setText(QCoreApplication::translate("carta", "Nome", nullptr));
        label_3->setText(QCoreApplication::translate("carta", "Data", nullptr));
        label_4->setText(QCoreApplication::translate("carta", "tipo", nullptr));
        pushButton->setText(QCoreApplication::translate("carta", "archivia", nullptr));
        pushButton_2->setText(QCoreApplication::translate("carta", "modifica", nullptr));
        pushButton_3->setText(QCoreApplication::translate("carta", "elimina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class carta: public Ui_carta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTA_H
