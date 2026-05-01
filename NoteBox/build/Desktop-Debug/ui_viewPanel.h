/********************************************************************************
** Form generated from reading UI file 'viewPanel.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEWPANEL_H
#define UI_VIEWPANEL_H

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

class Ui_viewPanel
{
public:
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_6;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_6;
    QFrame *frameTitolo;
    QHBoxLayout *horizontalLayout_38;
    QLabel *labelTitolo_5;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout;
    QFrame *frameImmagine;
    QVBoxLayout *verticalLayout;
    QLabel *labelImmagine;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_5;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_22;
    QFrame *frame_41;
    QVBoxLayout *verticalLayout_23;
    QLabel *label_7;
    QFrame *frame_42;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_2;
    QLabel *labelId_5;
    QFrame *frame_43;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_3;
    QLabel *labelAssegnatore_5;
    QFrame *frameEtichetta;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_4;
    QLabel *labelEtichetta_5;
    QFrame *frameScadenza;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_5;
    QLabel *labelScadenza_5;
    QLabel *label_8;
    QFrame *frame_47;
    QVBoxLayout *verticalLayout_24;
    QLabel *label;
    QFrame *frameTesto_5;
    QHBoxLayout *horizontalLayout_39;
    QLabel *labelTesto_5;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *buttonClose;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *viewPanel)
    {
        if (viewPanel->objectName().isEmpty())
            viewPanel->setObjectName("viewPanel");
        viewPanel->resize(867, 798);
        viewPanel->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(viewPanel);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_3 = new QFrame(viewPanel);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_3);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        frame = new QFrame(frame_3);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setStyleSheet(QString::fromUtf8("#frame_4 {\n"
"border: none;\n"
"}"));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_4);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame_4);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2{\n"
"border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_2);
        verticalLayout_5->setObjectName("verticalLayout_5");
        label_6 = new QLabel(frame_2);
        label_6->setObjectName("label_6");

        verticalLayout_5->addWidget(label_6);

        frameTitolo = new QFrame(frame_2);
        frameTitolo->setObjectName("frameTitolo");
        frameTitolo->setFrameShape(QFrame::Shape::StyledPanel);
        frameTitolo->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_38 = new QHBoxLayout(frameTitolo);
        horizontalLayout_38->setObjectName("horizontalLayout_38");
        labelTitolo_5 = new QLabel(frameTitolo);
        labelTitolo_5->setObjectName("labelTitolo_5");

        horizontalLayout_38->addWidget(labelTitolo_5);


        verticalLayout_5->addWidget(frameTitolo);


        verticalLayout_6->addWidget(frame_2);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setStyleSheet(QString::fromUtf8("#frame_6 {\n"
"border:none;\n"
"}"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_6);
        horizontalLayout->setObjectName("horizontalLayout");
        frameImmagine = new QFrame(frame_6);
        frameImmagine->setObjectName("frameImmagine");
        frameImmagine->setFrameShape(QFrame::Shape::StyledPanel);
        frameImmagine->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frameImmagine);
        verticalLayout->setObjectName("verticalLayout");
        labelImmagine = new QLabel(frameImmagine);
        labelImmagine->setObjectName("labelImmagine");

        verticalLayout->addWidget(labelImmagine);


        horizontalLayout->addWidget(frameImmagine);

        frame_5 = new QFrame(frame_6);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(0, 600));
        frame_5->setStyleSheet(QString::fromUtf8("#frame_5{\n"
"border:none;\n"
"}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_5);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setMinimumSize(QSize(400, 0));
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea {\n"
"border:none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_5 = new QWidget();
        scrollAreaWidgetContents_5->setObjectName("scrollAreaWidgetContents_5");
        scrollAreaWidgetContents_5->setGeometry(QRect(0, 0, 400, 562));
        verticalLayout_21 = new QVBoxLayout(scrollAreaWidgetContents_5);
        verticalLayout_21->setObjectName("verticalLayout_21");
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setObjectName("verticalLayout_22");
        frame_41 = new QFrame(scrollAreaWidgetContents_5);
        frame_41->setObjectName("frame_41");
        frame_41->setStyleSheet(QString::fromUtf8("#frame_41{\n"
"border: none;\n"
"}"));
        frame_41->setFrameShape(QFrame::Shape::StyledPanel);
        frame_41->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_23 = new QVBoxLayout(frame_41);
        verticalLayout_23->setObjectName("verticalLayout_23");
        label_7 = new QLabel(frame_41);
        label_7->setObjectName("label_7");

        verticalLayout_23->addWidget(label_7);

        frame_42 = new QFrame(frame_41);
        frame_42->setObjectName("frame_42");
        frame_42->setFrameShape(QFrame::Shape::StyledPanel);
        frame_42->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_34 = new QHBoxLayout(frame_42);
        horizontalLayout_34->setObjectName("horizontalLayout_34");
        label_2 = new QLabel(frame_42);
        label_2->setObjectName("label_2");

        horizontalLayout_34->addWidget(label_2);

        labelId_5 = new QLabel(frame_42);
        labelId_5->setObjectName("labelId_5");

        horizontalLayout_34->addWidget(labelId_5);


        verticalLayout_23->addWidget(frame_42);

        frame_43 = new QFrame(frame_41);
        frame_43->setObjectName("frame_43");
        frame_43->setFrameShape(QFrame::Shape::StyledPanel);
        frame_43->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_35 = new QHBoxLayout(frame_43);
        horizontalLayout_35->setObjectName("horizontalLayout_35");
        label_3 = new QLabel(frame_43);
        label_3->setObjectName("label_3");

        horizontalLayout_35->addWidget(label_3);

        labelAssegnatore_5 = new QLabel(frame_43);
        labelAssegnatore_5->setObjectName("labelAssegnatore_5");

        horizontalLayout_35->addWidget(labelAssegnatore_5);


        verticalLayout_23->addWidget(frame_43);

        frameEtichetta = new QFrame(frame_41);
        frameEtichetta->setObjectName("frameEtichetta");
        frameEtichetta->setFrameShape(QFrame::Shape::StyledPanel);
        frameEtichetta->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_36 = new QHBoxLayout(frameEtichetta);
        horizontalLayout_36->setObjectName("horizontalLayout_36");
        label_4 = new QLabel(frameEtichetta);
        label_4->setObjectName("label_4");

        horizontalLayout_36->addWidget(label_4);

        labelEtichetta_5 = new QLabel(frameEtichetta);
        labelEtichetta_5->setObjectName("labelEtichetta_5");

        horizontalLayout_36->addWidget(labelEtichetta_5);


        verticalLayout_23->addWidget(frameEtichetta);

        frameScadenza = new QFrame(frame_41);
        frameScadenza->setObjectName("frameScadenza");
        frameScadenza->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenza->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_37 = new QHBoxLayout(frameScadenza);
        horizontalLayout_37->setObjectName("horizontalLayout_37");
        label_5 = new QLabel(frameScadenza);
        label_5->setObjectName("label_5");

        horizontalLayout_37->addWidget(label_5);

        labelScadenza_5 = new QLabel(frameScadenza);
        labelScadenza_5->setObjectName("labelScadenza_5");

        horizontalLayout_37->addWidget(labelScadenza_5);


        verticalLayout_23->addWidget(frameScadenza);


        verticalLayout_22->addWidget(frame_41);

        label_8 = new QLabel(scrollAreaWidgetContents_5);
        label_8->setObjectName("label_8");

        verticalLayout_22->addWidget(label_8);

        frame_47 = new QFrame(scrollAreaWidgetContents_5);
        frame_47->setObjectName("frame_47");
        frame_47->setStyleSheet(QString::fromUtf8("#frame_47 {\n"
"border: none;\n"
"}"));
        frame_47->setFrameShape(QFrame::Shape::StyledPanel);
        frame_47->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_24 = new QVBoxLayout(frame_47);
        verticalLayout_24->setSpacing(5);
        verticalLayout_24->setObjectName("verticalLayout_24");
        verticalLayout_24->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(frame_47);
        label->setObjectName("label");

        verticalLayout_24->addWidget(label);

        frameTesto_5 = new QFrame(frame_47);
        frameTesto_5->setObjectName("frameTesto_5");
        frameTesto_5->setStyleSheet(QString::fromUtf8(""));
        frameTesto_5->setFrameShape(QFrame::Shape::StyledPanel);
        frameTesto_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_39 = new QHBoxLayout(frameTesto_5);
        horizontalLayout_39->setObjectName("horizontalLayout_39");
        labelTesto_5 = new QLabel(frameTesto_5);
        labelTesto_5->setObjectName("labelTesto_5");
        labelTesto_5->setWordWrap(true);

        horizontalLayout_39->addWidget(labelTesto_5);


        verticalLayout_24->addWidget(frameTesto_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_24->addItem(verticalSpacer_2);


        verticalLayout_22->addWidget(frame_47);


        verticalLayout_21->addLayout(verticalLayout_22);

        scrollArea->setWidget(scrollAreaWidgetContents_5);

        verticalLayout_4->addWidget(scrollArea);

        frame_8 = new QFrame(frame_5);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_8);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_7);

        buttonClose = new QPushButton(frame_8);
        buttonClose->setObjectName("buttonClose");

        horizontalLayout_7->addWidget(buttonClose);


        verticalLayout_4->addWidget(frame_8);


        horizontalLayout->addWidget(frame_5);


        verticalLayout_6->addWidget(frame_6);


        horizontalLayout_2->addWidget(frame_4);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_3->addWidget(frame);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_2->addWidget(frame_3);


        retranslateUi(viewPanel);

        QMetaObject::connectSlotsByName(viewPanel);
    } // setupUi

    void retranslateUi(QWidget *viewPanel)
    {
        viewPanel->setWindowTitle(QCoreApplication::translate("viewPanel", "Form", nullptr));
        label_6->setText(QCoreApplication::translate("viewPanel", "Titolo:", nullptr));
        labelTitolo_5->setText(QCoreApplication::translate("viewPanel", "TextLabel", nullptr));
        labelImmagine->setText(QCoreApplication::translate("viewPanel", "immagine", nullptr));
        label_7->setText(QCoreApplication::translate("viewPanel", "Informazioni:", nullptr));
        label_2->setText(QCoreApplication::translate("viewPanel", "Id:", nullptr));
        labelId_5->setText(QCoreApplication::translate("viewPanel", "TextLabel", nullptr));
        label_3->setText(QCoreApplication::translate("viewPanel", "Assegnatore:", nullptr));
        labelAssegnatore_5->setText(QCoreApplication::translate("viewPanel", "TextLabel", nullptr));
        label_4->setText(QCoreApplication::translate("viewPanel", "Etichetta:", nullptr));
        labelEtichetta_5->setText(QCoreApplication::translate("viewPanel", "TextLabel", nullptr));
        label_5->setText(QCoreApplication::translate("viewPanel", "Scadenza:", nullptr));
        labelScadenza_5->setText(QCoreApplication::translate("viewPanel", "TextLabel", nullptr));
        label_8->setText(QString());
        label->setText(QCoreApplication::translate("viewPanel", "Contenuto Testuale:", nullptr));
        labelTesto_5->setText(QCoreApplication::translate("viewPanel", "frame testo", nullptr));
        buttonClose->setText(QCoreApplication::translate("viewPanel", "Chiudi", nullptr));
    } // retranslateUi

};

namespace Ui {
    class viewPanel: public Ui_viewPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEWPANEL_H
