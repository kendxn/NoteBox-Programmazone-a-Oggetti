/********************************************************************************
** Form generated from reading UI file 'cardWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDWIDGET_H
#define UI_CARDWIDGET_H

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

class Ui_cardWidget
{
public:
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelTitolo;
    QSpacerItem *horizontalSpacer;
    QLabel *label_3;
    QLabel *labelData;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_6;
    QLabel *labelImmagine;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLabel *labelNome;
    QSpacerItem *horizontalSpacer_2;
    QLabel *labelStatus;
    QFrame *frameTesto;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelTesto;
    QSpacerItem *verticalSpacer;
    QFrame *frameScadenza;
    QHBoxLayout *horizontalLayout;
    QLabel *labelGiorni;
    QSpacerItem *horizontalSpacer_3;
    QLabel *labelScadenza;
    QFrame *frameButtons;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *buttonCambiaStato;
    QPushButton *buttonVisualizza;
    QPushButton *buttonModifica;
    QPushButton *buttonElimina;

    void setupUi(QWidget *cardWidget)
    {
        if (cardWidget->objectName().isEmpty())
            cardWidget->setObjectName("cardWidget");
        cardWidget->resize(564, 608);
        cardWidget->setMinimumSize(QSize(0, 400));
        cardWidget->setMaximumSize(QSize(600, 16777215));
        cardWidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_3 = new QVBoxLayout(cardWidget);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(cardWidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, -1);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 100));
        frame_2->setStyleSheet(QString::fromUtf8("background-color: #1a2a3a;"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame_2);
        verticalLayout->setObjectName("verticalLayout");
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 50));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        labelTitolo = new QLabel(frame_4);
        labelTitolo->setObjectName("labelTitolo");
        labelTitolo->setMinimumSize(QSize(300, 0));

        horizontalLayout_2->addWidget(labelTitolo);

        horizontalSpacer = new QSpacerItem(553, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        label_3 = new QLabel(frame_4);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        labelData = new QLabel(frame_4);
        labelData->setObjectName("labelData");
        labelData->setMinimumSize(QSize(100, 0));

        horizontalLayout_2->addWidget(labelData);


        verticalLayout->addWidget(frame_4);

        scrollArea = new QScrollArea(frame_2);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea {\n"
"border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 542, 419));
        verticalLayout_2 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_3 = new QFrame(scrollAreaWidgetContents);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_3);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        labelImmagine = new QLabel(frame_3);
        labelImmagine->setObjectName("labelImmagine");
        labelImmagine->setMinimumSize(QSize(0, 100));
        labelImmagine->setScaledContents(true);

        horizontalLayout_6->addWidget(labelImmagine);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setMaximumSize(QSize(16777215, 50));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label = new QLabel(frame_5);
        label->setObjectName("label");

        horizontalLayout_3->addWidget(label);

        labelNome = new QLabel(frame_5);
        labelNome->setObjectName("labelNome");
        labelNome->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(labelNome);

        horizontalSpacer_2 = new QSpacerItem(407, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        labelStatus = new QLabel(frame_5);
        labelStatus->setObjectName("labelStatus");

        horizontalLayout_3->addWidget(labelStatus);


        horizontalLayout_6->addWidget(frame_5);


        verticalLayout_2->addWidget(frame_3);

        frameTesto = new QFrame(scrollAreaWidgetContents);
        frameTesto->setObjectName("frameTesto");
        frameTesto->setMinimumSize(QSize(0, 20));
        frameTesto->setStyleSheet(QString::fromUtf8("border: none;"));
        frameTesto->setFrameShape(QFrame::Shape::StyledPanel);
        frameTesto->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(frameTesto);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        labelTesto = new QLabel(frameTesto);
        labelTesto->setObjectName("labelTesto");
        labelTesto->setWordWrap(true);

        horizontalLayout_5->addWidget(labelTesto);


        verticalLayout_2->addWidget(frameTesto);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        frameScadenza = new QFrame(frame_2);
        frameScadenza->setObjectName("frameScadenza");
        frameScadenza->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenza->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frameScadenza);
        horizontalLayout->setObjectName("horizontalLayout");
        labelGiorni = new QLabel(frameScadenza);
        labelGiorni->setObjectName("labelGiorni");

        horizontalLayout->addWidget(labelGiorni);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        labelScadenza = new QLabel(frameScadenza);
        labelScadenza->setObjectName("labelScadenza");

        horizontalLayout->addWidget(labelScadenza);


        verticalLayout->addWidget(frameScadenza);

        frameButtons = new QFrame(frame_2);
        frameButtons->setObjectName("frameButtons");
        frameButtons->setMinimumSize(QSize(0, 50));
        frameButtons->setMaximumSize(QSize(16777215, 50));
        frameButtons->setStyleSheet(QString::fromUtf8("#frameButtons {\n"
"border: null;\n"
"}"));
        frameButtons->setFrameShape(QFrame::Shape::StyledPanel);
        frameButtons->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frameButtons);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        buttonCambiaStato = new QPushButton(frameButtons);
        buttonCambiaStato->setObjectName("buttonCambiaStato");

        horizontalLayout_4->addWidget(buttonCambiaStato);

        buttonVisualizza = new QPushButton(frameButtons);
        buttonVisualizza->setObjectName("buttonVisualizza");

        horizontalLayout_4->addWidget(buttonVisualizza);

        buttonModifica = new QPushButton(frameButtons);
        buttonModifica->setObjectName("buttonModifica");

        horizontalLayout_4->addWidget(buttonModifica);

        buttonElimina = new QPushButton(frameButtons);
        buttonElimina->setObjectName("buttonElimina");

        horizontalLayout_4->addWidget(buttonElimina);


        verticalLayout->addWidget(frameButtons);


        verticalLayout_4->addWidget(frame_2);


        verticalLayout_3->addWidget(frame);


        retranslateUi(cardWidget);

        QMetaObject::connectSlotsByName(cardWidget);
    } // setupUi

    void retranslateUi(QWidget *cardWidget)
    {
        cardWidget->setWindowTitle(QCoreApplication::translate("cardWidget", "Form", nullptr));
        labelTitolo->setText(QCoreApplication::translate("cardWidget", "titolo", nullptr));
        label_3->setText(QCoreApplication::translate("cardWidget", "Ultima modifica: ", nullptr));
        labelData->setText(QCoreApplication::translate("cardWidget", "Data", nullptr));
        labelImmagine->setText(QString());
        label->setText(QCoreApplication::translate("cardWidget", "Autore: ", nullptr));
        labelNome->setText(QCoreApplication::translate("cardWidget", "Nome", nullptr));
        labelStatus->setText(QCoreApplication::translate("cardWidget", "TextLabel", nullptr));
        labelTesto->setText(QCoreApplication::translate("cardWidget", "TextLabel", nullptr));
        labelGiorni->setText(QCoreApplication::translate("cardWidget", "labelGiorni", nullptr));
        labelScadenza->setText(QCoreApplication::translate("cardWidget", "TextLabel", nullptr));
        buttonCambiaStato->setText(QCoreApplication::translate("cardWidget", "Cambia stato", nullptr));
        buttonVisualizza->setText(QCoreApplication::translate("cardWidget", "Visualizza", nullptr));
        buttonModifica->setText(QCoreApplication::translate("cardWidget", "Modifica", nullptr));
        buttonElimina->setText(QCoreApplication::translate("cardWidget", "Elimina", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cardWidget: public Ui_cardWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDWIDGET_H
