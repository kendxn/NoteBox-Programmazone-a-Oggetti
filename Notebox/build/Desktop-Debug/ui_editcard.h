/********************************************************************************
** Form generated from reading UI file 'editCard.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCARD_H
#define UI_EDITCARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_editCard
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frameInputWrapper;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QFrame *frameCardBox;
    QVBoxLayout *verticalLayout_7;
    QFrame *frameTitolo;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineTitolo;
    QFrame *frameInput1;
    QHBoxLayout *horizontalLayout_4;
    QTextEdit *boxTesto;
    QFrame *frameImmagine;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelImmagine;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *buttonImmagine;
    QFrame *frameInput2;
    QVBoxLayout *verticalLayout_6;
    QFrame *frameEtichetta;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *comboBox;
    QFrame *frameAsegnatore;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineAssegnatore;
    QFrame *frameScadenzaButton;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frameScadenza_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_5;
    QPushButton *buttonSetScadenza;
    QFrame *frameScadenzaEdit;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QFrame *frameSetting;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonAnnulla;
    QPushButton *buttonSalva;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *editCard)
    {
        if (editCard->objectName().isEmpty())
            editCard->setObjectName("editCard");
        editCard->resize(898, 600);
        editCard->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(editCard);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(editCard);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frameInputWrapper = new QFrame(frame);
        frameInputWrapper->setObjectName("frameInputWrapper");
        frameInputWrapper->setStyleSheet(QString::fromUtf8("#frameInputWrapper {\n"
"border:none;\n"
"}"));
        frameInputWrapper->setFrameShape(QFrame::Shape::StyledPanel);
        frameInputWrapper->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frameInputWrapper);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        frameCardBox = new QFrame(frameInputWrapper);
        frameCardBox->setObjectName("frameCardBox");
        frameCardBox->setMinimumSize(QSize(600, 0));
        frameCardBox->setStyleSheet(QString::fromUtf8("#frameCardBox {\n"
"border: none;\n"
" }"));
        frameCardBox->setFrameShape(QFrame::Shape::StyledPanel);
        frameCardBox->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_7 = new QVBoxLayout(frameCardBox);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        frameTitolo = new QFrame(frameCardBox);
        frameTitolo->setObjectName("frameTitolo");
        frameTitolo->setMaximumSize(QSize(16777215, 50));
        frameTitolo->setFrameShape(QFrame::Shape::StyledPanel);
        frameTitolo->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_8 = new QHBoxLayout(frameTitolo);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_7 = new QLabel(frameTitolo);
        label_7->setObjectName("label_7");
        label_7->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_8->addWidget(label_7);

        lineTitolo = new QLineEdit(frameTitolo);
        lineTitolo->setObjectName("lineTitolo");

        horizontalLayout_8->addWidget(lineTitolo);


        verticalLayout_7->addWidget(frameTitolo);

        frameInput1 = new QFrame(frameCardBox);
        frameInput1->setObjectName("frameInput1");
        frameInput1->setMinimumSize(QSize(0, 20));
        frameInput1->setMaximumSize(QSize(16777215, 16777215));
        frameInput1->setFrameShape(QFrame::Shape::StyledPanel);
        frameInput1->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_4 = new QHBoxLayout(frameInput1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setSizeConstraint(QLayout::SizeConstraint::SetMinAndMaxSize);
        boxTesto = new QTextEdit(frameInput1);
        boxTesto->setObjectName("boxTesto");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(boxTesto->sizePolicy().hasHeightForWidth());
        boxTesto->setSizePolicy(sizePolicy);
        boxTesto->setMinimumSize(QSize(0, 40));

        horizontalLayout_4->addWidget(boxTesto);


        verticalLayout_7->addWidget(frameInput1);

        frameImmagine = new QFrame(frameCardBox);
        frameImmagine->setObjectName("frameImmagine");
        frameImmagine->setMaximumSize(QSize(16777215, 46));
        frameImmagine->setFrameShape(QFrame::Shape::StyledPanel);
        frameImmagine->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frameImmagine);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        labelImmagine = new QLabel(frameImmagine);
        labelImmagine->setObjectName("labelImmagine");

        horizontalLayout_7->addWidget(labelImmagine);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        buttonImmagine = new QPushButton(frameImmagine);
        buttonImmagine->setObjectName("buttonImmagine");

        horizontalLayout_7->addWidget(buttonImmagine);


        verticalLayout_7->addWidget(frameImmagine);

        frameInput2 = new QFrame(frameCardBox);
        frameInput2->setObjectName("frameInput2");
        frameInput2->setFrameShape(QFrame::Shape::StyledPanel);
        frameInput2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_6 = new QVBoxLayout(frameInput2);
        verticalLayout_6->setObjectName("verticalLayout_6");
        frameEtichetta = new QFrame(frameInput2);
        frameEtichetta->setObjectName("frameEtichetta");
        frameEtichetta->setFrameShape(QFrame::Shape::StyledPanel);
        frameEtichetta->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_9 = new QHBoxLayout(frameEtichetta);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_6 = new QLabel(frameEtichetta);
        label_6->setObjectName("label_6");

        horizontalLayout_9->addWidget(label_6);

        comboBox = new QComboBox(frameEtichetta);
        comboBox->setObjectName("comboBox");

        horizontalLayout_9->addWidget(comboBox);


        verticalLayout_6->addWidget(frameEtichetta);

        frameAsegnatore = new QFrame(frameInput2);
        frameAsegnatore->setObjectName("frameAsegnatore");
        frameAsegnatore->setFrameShape(QFrame::Shape::StyledPanel);
        frameAsegnatore->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_5 = new QHBoxLayout(frameAsegnatore);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(frameAsegnatore);
        label_3->setObjectName("label_3");

        horizontalLayout_5->addWidget(label_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        lineAssegnatore = new QLineEdit(frameAsegnatore);
        lineAssegnatore->setObjectName("lineAssegnatore");

        horizontalLayout_5->addWidget(lineAssegnatore);


        verticalLayout_6->addWidget(frameAsegnatore);

        frameScadenzaButton = new QFrame(frameInput2);
        frameScadenzaButton->setObjectName("frameScadenzaButton");
        frameScadenzaButton->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenzaButton->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frameScadenzaButton);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frameScadenza_2 = new QFrame(frameScadenzaButton);
        frameScadenza_2->setObjectName("frameScadenza_2");
        frameScadenza_2->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenza_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_11 = new QHBoxLayout(frameScadenza_2);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_5 = new QLabel(frameScadenza_2);
        label_5->setObjectName("label_5");

        horizontalLayout_11->addWidget(label_5);

        buttonSetScadenza = new QPushButton(frameScadenza_2);
        buttonSetScadenza->setObjectName("buttonSetScadenza");

        horizontalLayout_11->addWidget(buttonSetScadenza);


        horizontalLayout_3->addWidget(frameScadenza_2);


        verticalLayout_6->addWidget(frameScadenzaButton);

        frameScadenzaEdit = new QFrame(frameInput2);
        frameScadenzaEdit->setObjectName("frameScadenzaEdit");
        frameScadenzaEdit->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenzaEdit->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frameScadenzaEdit);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(frameScadenzaEdit);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        dateEdit = new QDateEdit(frameScadenzaEdit);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCurrentSection(QDateTimeEdit::Section::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(2);

        horizontalLayout_6->addWidget(dateEdit);


        verticalLayout_6->addWidget(frameScadenzaEdit);

        frameSetting = new QFrame(frameInput2);
        frameSetting->setObjectName("frameSetting");
        frameSetting->setStyleSheet(QString::fromUtf8("border: none;"));
        frameSetting->setFrameShape(QFrame::Shape::StyledPanel);
        frameSetting->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_10 = new QHBoxLayout(frameSetting);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        buttonAnnulla = new QPushButton(frameSetting);
        buttonAnnulla->setObjectName("buttonAnnulla");

        horizontalLayout_10->addWidget(buttonAnnulla);

        buttonSalva = new QPushButton(frameSetting);
        buttonSalva->setObjectName("buttonSalva");

        horizontalLayout_10->addWidget(buttonSalva);


        verticalLayout_6->addWidget(frameSetting);


        verticalLayout_7->addWidget(frameInput2);


        horizontalLayout_2->addWidget(frameCardBox);

        horizontalSpacer_2 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frameInputWrapper);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout->addWidget(frame);


        retranslateUi(editCard);

        QMetaObject::connectSlotsByName(editCard);
    } // setupUi

    void retranslateUi(QWidget *editCard)
    {
        editCard->setWindowTitle(QCoreApplication::translate("editCard", "Form", nullptr));
        label_7->setText(QCoreApplication::translate("editCard", "Titolo", nullptr));
        lineTitolo->setText(QString());
        lineTitolo->setPlaceholderText(QCoreApplication::translate("editCard", "Inserisci titolo", nullptr));
        boxTesto->setPlaceholderText(QCoreApplication::translate("editCard", "Inserisci nuova nota...", nullptr));
        labelImmagine->setText(QCoreApplication::translate("editCard", "Inserisci immagine", nullptr));
        buttonImmagine->setText(QCoreApplication::translate("editCard", "Immagine", nullptr));
        label_6->setText(QCoreApplication::translate("editCard", "etichetta:", nullptr));
        label_3->setText(QCoreApplication::translate("editCard", "assegnatore:", nullptr));
        lineAssegnatore->setText(QString());
        lineAssegnatore->setPlaceholderText(QCoreApplication::translate("editCard", "io", nullptr));
        label_5->setText(QCoreApplication::translate("editCard", "Inserisci scadenza:", nullptr));
        buttonSetScadenza->setText(QCoreApplication::translate("editCard", "Seleziona Data", nullptr));
        label_4->setText(QCoreApplication::translate("editCard", "Scadenza:", nullptr));
        buttonAnnulla->setText(QCoreApplication::translate("editCard", "Chiudi", nullptr));
        buttonSalva->setText(QCoreApplication::translate("editCard", "Salva", nullptr));
    } // retranslateUi

};

namespace Ui {
    class editCard: public Ui_editCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCARD_H
