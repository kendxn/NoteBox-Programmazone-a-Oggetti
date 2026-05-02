/********************************************************************************
** Form generated from reading UI file 'searchWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHWINDOW_H
#define UI_SEARCHWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchWindow
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelLogo;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_2;
    QLabel *searchLabel;
    QLineEdit *lineSearch;
    QPushButton *buttonCancella;
    QPushButton *buttonAnnullaRicerca;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *searchWindow)
    {
        if (searchWindow->objectName().isEmpty())
            searchWindow->setObjectName("searchWindow");
        searchWindow->resize(887, 637);
        searchWindow->setStyleSheet(QString::fromUtf8("background-color: #1a2a3a;"));
        verticalLayout = new QVBoxLayout(searchWindow);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(searchWindow);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("#frame{\n"
"border:none;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 75));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        labelLogo = new QLabel(frame_2);
        labelLogo->setObjectName("labelLogo");
        labelLogo->setMinimumSize(QSize(200, 0));
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(25);
        font.setBold(true);
        font.setItalic(true);
        labelLogo->setFont(font);
        labelLogo->setStyleSheet(QString::fromUtf8("#labelLogo {\n"
"    /* Colore del testo (puoi usare un gradiente o un colore solido) */\n"
"    color: #ffffff; \n"
"    \n"
"    /* Font: usane uno bold e moderno */\n"
"    font-family: \"Segoe UI\", \"Arial\", sans-serif;\n"
"    font-weight: bold;\n"
"    font-style: italic;\n"
"    \n"
"    /* Allineamento */\n"
"    qproperty-alignment: 'AlignCenter';\n"
"    \n"
"    /* Sfondo (opzionale, se vuoi un tocco di colore dietro) */\n"
"    background-color: transparent;\n"
"    \n"
"    /* Rimuove eventuali bordi ereditati dal resto dell'app */\n"
"    border: none;\n"
"    padding: 0px;\n"
"}"));

        horizontalLayout_3->addWidget(labelLogo);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(100, 0));
        frame_7->setStyleSheet(QString::fromUtf8("#frame_7{\n"
"border: none}"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_7);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        searchLabel = new QLabel(frame_7);
        searchLabel->setObjectName("searchLabel");

        horizontalLayout_2->addWidget(searchLabel);

        lineSearch = new QLineEdit(frame_7);
        lineSearch->setObjectName("lineSearch");

        horizontalLayout_2->addWidget(lineSearch);

        buttonCancella = new QPushButton(frame_7);
        buttonCancella->setObjectName("buttonCancella");

        horizontalLayout_2->addWidget(buttonCancella);

        buttonAnnullaRicerca = new QPushButton(frame_7);
        buttonAnnullaRicerca->setObjectName("buttonAnnullaRicerca");

        horizontalLayout_2->addWidget(buttonAnnullaRicerca);


        horizontalLayout_3->addWidget(frame_7);


        verticalLayout_2->addWidget(frame_2);

        scrollArea = new QScrollArea(frame);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("#scrollArea{\n"
"border: none;\n"
"}"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 851, 520));
        horizontalLayout = new QHBoxLayout(scrollAreaWidgetContents);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");

        horizontalLayout->addLayout(gridLayout);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);


        verticalLayout->addWidget(frame);


        retranslateUi(searchWindow);

        QMetaObject::connectSlotsByName(searchWindow);
    } // setupUi

    void retranslateUi(QWidget *searchWindow)
    {
        searchWindow->setWindowTitle(QCoreApplication::translate("searchWindow", "Form", nullptr));
        labelLogo->setText(QCoreApplication::translate("searchWindow", "NOTECPP", nullptr));
        searchLabel->setText(QCoreApplication::translate("searchWindow", "Chiave di Ricerca: ", nullptr));
        lineSearch->setPlaceholderText(QCoreApplication::translate("searchWindow", "Inserisci chiave di ricerca", nullptr));
        buttonCancella->setText(QCoreApplication::translate("searchWindow", "Cancella", nullptr));
        buttonAnnullaRicerca->setText(QCoreApplication::translate("searchWindow", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchWindow: public Ui_searchWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHWINDOW_H
