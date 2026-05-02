/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSalva;
    QAction *actionCarica;
    QAction *actionEsci;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelLogo;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_12;
    QLabel *searchLabel;
    QLineEdit *lineSearch;
    QPushButton *pushButton_5;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frameSideBar;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QPushButton *buttonNote;
    QPushButton *buttonPromemoria;
    QPushButton *buttonTask;
    QPushButton *buttonMultimediali;
    QPushButton *buttonEtichetteAdd;
    QLabel *label_9;
    QLabel *label_8;
    QScrollArea *frameLabel;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_2;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_4;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QFrame *frameInputWrapper;
    QHBoxLayout *horizontalLayout;
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
    QSpacerItem *horizontalSpacer_4;
    QPushButton *buttonImmagine;
    QFrame *frameInput2;
    QVBoxLayout *verticalLayout_6;
    QFrame *frameTask;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label;
    QSpacerItem *horizontalSpacer_6;
    QCheckBox *checkTask;
    QFrame *frameEtichetta;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_6;
    QComboBox *comboBox;
    QFrame *frameAsegnatore;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_3;
    QLineEdit *lineAssegnatore;
    QFrame *frameButtonScandenza;
    QHBoxLayout *horizontalLayout_15;
    QFrame *frameScadenza_2;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_5;
    QPushButton *buttonSetScadenza;
    QFrame *frameScadenza;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QDateEdit *dateEdit;
    QFrame *frameSetting;
    QHBoxLayout *horizontalLayout_10;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *buttonClose;
    QPushButton *buttonSalva;
    QSpacerItem *horizontalSpacer_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_7;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_17;
    QFrame *frame_3;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer_3;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_2;
    QPushButton *buttonInizia;
    QPushButton *buttonImporta;
    QSpacerItem *verticalSpacer_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1500, 1000);
        MainWindow->setStyleSheet(QString::fromUtf8("/* Sfondo nero per tutta l'applicazione */\n"
"QMainWindow, QWidget#page_2 {\n"
"    background-color: #000000;\n"
"    color: #ffffff; /* Testo bianco di default */\n"
"}\n"
"\n"
"/* Regola per i Frame con bordi bianchi arrotondati */\n"
"QFrame {\n"
"    border: 1px solid #ffffff;\n"
"    border-radius: 8px;\n"
"    background-color: #1a1a1a; /* Un grigio scurissimo per dare profondit\303\240 */\n"
"    padding: 0px;\n"
"}\n"
"\n"
"/* Eccezione: non vogliamo bordi bianchi attorno ai bottoni o agli input */\n"
"QPushButton, QLineEdit, QTextEdit, QDateTimeEdit {\n"
"    border: 1px solid #555555;\n"
"    border-radius: 8px;\n"
"    background-color: #333333;\n"
"    color: white;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QLabel{\n"
"    border: 0px;\n"
"}\n"
"\n"
"/* Effetto al passaggio del mouse sui bottoni */\n"
"QPushButton:hover {\n"
"    background-color: #444444;\n"
"    border: 1px solid #00aaff; /* Un tocco di azzurro al passaggio */\n"
"}"));
        MainWindow->setToolButtonStyle(Qt::ToolButtonStyle::ToolButtonTextBesideIcon);
        actionSalva = new QAction(MainWindow);
        actionSalva->setObjectName("actionSalva");
        actionSalva->setCheckable(true);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSave));
        actionSalva->setIcon(icon);
        actionSalva->setMenuRole(QAction::MenuRole::NoRole);
        actionCarica = new QAction(MainWindow);
        actionCarica->setObjectName("actionCarica");
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::FolderOpen));
        actionCarica->setIcon(icon1);
        actionCarica->setMenuRole(QAction::MenuRole::NoRole);
        actionEsci = new QAction(MainWindow);
        actionEsci->setObjectName("actionEsci");
        QIcon icon2(QIcon::fromTheme(QIcon::ThemeIcon::EditClear));
        actionEsci->setIcon(icon2);
        actionEsci->setMenuRole(QAction::MenuRole::NoRole);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setStyleSheet(QString::fromUtf8(""));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayout_9 = new QVBoxLayout(page);
        verticalLayout_9->setObjectName("verticalLayout_9");
        frame_2 = new QFrame(page);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 75));
        frame_2->setMaximumSize(QSize(16777215, 100));
        frame_2->setStyleSheet(QString::fromUtf8("#frame_2 {\n"
"border: none;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(100, 0));
        frame_6->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_6->setFrameShape(QFrame::Shape::StyledPanel);
        frame_6->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_6);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        labelLogo = new QLabel(frame_6);
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

        horizontalLayout_11->addWidget(labelLogo);


        horizontalLayout_3->addWidget(frame_6);

        frame_7 = new QFrame(frame_2);
        frame_7->setObjectName("frame_7");
        frame_7->setMinimumSize(QSize(100, 0));
        frame_7->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_7->setFrameShape(QFrame::Shape::StyledPanel);
        frame_7->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_7);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        searchLabel = new QLabel(frame_7);
        searchLabel->setObjectName("searchLabel");

        horizontalLayout_12->addWidget(searchLabel);

        lineSearch = new QLineEdit(frame_7);
        lineSearch->setObjectName("lineSearch");

        horizontalLayout_12->addWidget(lineSearch);


        horizontalLayout_3->addWidget(frame_7);

        pushButton_5 = new QPushButton(frame_2);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout_3->addWidget(pushButton_5);


        verticalLayout_9->addWidget(frame_2);

        frame = new QFrame(page);
        frame->setObjectName("frame");
        frame->setStyleSheet(QString::fromUtf8("#frame {\n"
"border: none;\n"
"}"));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frameSideBar = new QFrame(frame);
        frameSideBar->setObjectName("frameSideBar");
        frameSideBar->setMinimumSize(QSize(200, 0));
        frameSideBar->setMaximumSize(QSize(300, 16777215));
        frameSideBar->setStyleSheet(QString::fromUtf8("#frameSideBar {\n"
"border: none;\n"
"}"));
        frameSideBar->setFrameShape(QFrame::Shape::StyledPanel);
        frameSideBar->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_2 = new QVBoxLayout(frameSideBar);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frameSideBar);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(0, 300));
        frame_4->setFrameShape(QFrame::Shape::StyledPanel);
        frame_4->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(30, -1, 30, -1);
        buttonNote = new QPushButton(frame_4);
        buttonNote->setObjectName("buttonNote");

        verticalLayout_3->addWidget(buttonNote);

        buttonPromemoria = new QPushButton(frame_4);
        buttonPromemoria->setObjectName("buttonPromemoria");

        verticalLayout_3->addWidget(buttonPromemoria);

        buttonTask = new QPushButton(frame_4);
        buttonTask->setObjectName("buttonTask");

        verticalLayout_3->addWidget(buttonTask);

        buttonMultimediali = new QPushButton(frame_4);
        buttonMultimediali->setObjectName("buttonMultimediali");

        verticalLayout_3->addWidget(buttonMultimediali);

        buttonEtichetteAdd = new QPushButton(frame_4);
        buttonEtichetteAdd->setObjectName("buttonEtichetteAdd");

        verticalLayout_3->addWidget(buttonEtichetteAdd);


        verticalLayout_2->addWidget(frame_4);

        label_9 = new QLabel(frameSideBar);
        label_9->setObjectName("label_9");

        verticalLayout_2->addWidget(label_9);

        label_8 = new QLabel(frameSideBar);
        label_8->setObjectName("label_8");

        verticalLayout_2->addWidget(label_8);

        frameLabel = new QScrollArea(frameSideBar);
        frameLabel->setObjectName("frameLabel");
        frameLabel->setStyleSheet(QString::fromUtf8("#frameLabel{\n"
"border: none;\n"
"}"));
        frameLabel->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 300, 441));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer_2 = new QSpacerItem(20, 404, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        frameLabel->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_2->addWidget(frameLabel);


        horizontalLayout_2->addWidget(frameSideBar);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setStyleSheet(QString::fromUtf8("#frame_5 {\n"
"border:none;\n"
"}"));
        frame_5->setFrameShape(QFrame::Shape::StyledPanel);
        frame_5->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_5);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        scrollArea = new QScrollArea(frame_5);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1154, 793));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName("verticalLayout_5");
        frameInputWrapper = new QFrame(scrollAreaWidgetContents);
        frameInputWrapper->setObjectName("frameInputWrapper");
        frameInputWrapper->setStyleSheet(QString::fromUtf8("#frameInputWrapper {\n"
"border: null;\n"
"}"));
        frameInputWrapper->setFrameShape(QFrame::Shape::StyledPanel);
        frameInputWrapper->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frameInputWrapper);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frameCardBox = new QFrame(frameInputWrapper);
        frameCardBox->setObjectName("frameCardBox");
        frameCardBox->setMinimumSize(QSize(600, 0));
        frameCardBox->setStyleSheet(QString::fromUtf8("#frameCardBox {\n"
"border: none;\n"
"}"));
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
        frameImmagine->setFrameShape(QFrame::Shape::StyledPanel);
        frameImmagine->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_7 = new QHBoxLayout(frameImmagine);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        labelImmagine = new QLabel(frameImmagine);
        labelImmagine->setObjectName("labelImmagine");

        horizontalLayout_7->addWidget(labelImmagine);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);

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
        frameTask = new QFrame(frameInput2);
        frameTask->setObjectName("frameTask");
        frameTask->setFrameShape(QFrame::Shape::StyledPanel);
        frameTask->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_16 = new QHBoxLayout(frameTask);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        label = new QLabel(frameTask);
        label->setObjectName("label");

        horizontalLayout_16->addWidget(label);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);

        checkTask = new QCheckBox(frameTask);
        checkTask->setObjectName("checkTask");

        horizontalLayout_16->addWidget(checkTask);


        verticalLayout_6->addWidget(frameTask);

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

        frameButtonScandenza = new QFrame(frameInput2);
        frameButtonScandenza->setObjectName("frameButtonScandenza");
        frameButtonScandenza->setStyleSheet(QString::fromUtf8("#frameButtonScandenza {\n"
"border: none;\n"
"}"));
        frameButtonScandenza->setFrameShape(QFrame::Shape::StyledPanel);
        frameButtonScandenza->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_15 = new QHBoxLayout(frameButtonScandenza);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        frameScadenza_2 = new QFrame(frameButtonScandenza);
        frameScadenza_2->setObjectName("frameScadenza_2");
        frameScadenza_2->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenza_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_14 = new QHBoxLayout(frameScadenza_2);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        label_5 = new QLabel(frameScadenza_2);
        label_5->setObjectName("label_5");

        horizontalLayout_14->addWidget(label_5);

        buttonSetScadenza = new QPushButton(frameScadenza_2);
        buttonSetScadenza->setObjectName("buttonSetScadenza");

        horizontalLayout_14->addWidget(buttonSetScadenza);


        horizontalLayout_15->addWidget(frameScadenza_2);


        verticalLayout_6->addWidget(frameButtonScandenza);

        frameScadenza = new QFrame(frameInput2);
        frameScadenza->setObjectName("frameScadenza");
        frameScadenza->setFrameShape(QFrame::Shape::StyledPanel);
        frameScadenza->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_6 = new QHBoxLayout(frameScadenza);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(frameScadenza);
        label_4->setObjectName("label_4");

        horizontalLayout_6->addWidget(label_4);

        dateEdit = new QDateEdit(frameScadenza);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCurrentSection(QDateTimeEdit::Section::YearSection);
        dateEdit->setCalendarPopup(true);
        dateEdit->setCurrentSectionIndex(2);

        horizontalLayout_6->addWidget(dateEdit);


        verticalLayout_6->addWidget(frameScadenza);

        frameSetting = new QFrame(frameInput2);
        frameSetting->setObjectName("frameSetting");
        frameSetting->setStyleSheet(QString::fromUtf8("border: null;"));
        frameSetting->setFrameShape(QFrame::Shape::StyledPanel);
        frameSetting->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_10 = new QHBoxLayout(frameSetting);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_5);

        buttonClose = new QPushButton(frameSetting);
        buttonClose->setObjectName("buttonClose");

        horizontalLayout_10->addWidget(buttonClose);

        buttonSalva = new QPushButton(frameSetting);
        buttonSalva->setObjectName("buttonSalva");

        horizontalLayout_10->addWidget(buttonSalva);


        verticalLayout_6->addWidget(frameSetting);


        verticalLayout_7->addWidget(frameInput2);


        horizontalLayout->addWidget(frameCardBox);

        horizontalSpacer_2 = new QSpacerItem(189, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout_5->addWidget(frameInputWrapper);

        frame_8 = new QFrame(scrollAreaWidgetContents);
        frame_8->setObjectName("frame_8");
        frame_8->setStyleSheet(QString::fromUtf8("#frame_8 {\n"
"border: none;\n"
"}"));
        frame_8->setFrameShape(QFrame::Shape::StyledPanel);
        frame_8->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_8);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_7);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(10);
        gridLayout->setObjectName("gridLayout");

        horizontalLayout_13->addLayout(gridLayout);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_8);


        verticalLayout_5->addWidget(frame_8);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_5->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_4->addWidget(scrollArea);


        horizontalLayout_2->addWidget(frame_5);


        verticalLayout_9->addWidget(frame);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayout_12 = new QVBoxLayout(page_2);
        verticalLayout_12->setObjectName("verticalLayout_12");
        frame_9 = new QFrame(page_2);
        frame_9->setObjectName("frame_9");
        frame_9->setStyleSheet(QString::fromUtf8("#frame_9{\n"
"border: none;\n"
"}"));
        frame_9->setFrameShape(QFrame::Shape::StyledPanel);
        frame_9->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_9);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        frame_3 = new QFrame(frame_9);
        frame_3->setObjectName("frame_3");
        frame_3->setStyleSheet(QString::fromUtf8("#frame_3 {\n"
"background-image: url(\":/res/logo.png\");\n"
"    background-repeat: no-repeat;\n"
"    background-position: center;\n"
"    border: none;\n"
"    background-color: transparent;\n"
"}"));
        frame_3->setFrameShape(QFrame::Shape::StyledPanel);
        frame_3->setFrameShadow(QFrame::Shadow::Raised);

        horizontalLayout_17->addWidget(frame_3);

        frame_10 = new QFrame(frame_9);
        frame_10->setObjectName("frame_10");
        frame_10->setStyleSheet(QString::fromUtf8("#frame_10 {\n"
"border: none;\n"
"}"));
        frame_10->setFrameShape(QFrame::Shape::StyledPanel);
        frame_10->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_10);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer_3 = new QSpacerItem(20, 179, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_3);

        frame_11 = new QFrame(frame_10);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::Shape::StyledPanel);
        frame_11->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_11);
        verticalLayout_13->setObjectName("verticalLayout_13");
        frame_12 = new QFrame(frame_11);
        frame_12->setObjectName("frame_12");
        frame_12->setStyleSheet(QString::fromUtf8("border:none;"));
        frame_12->setFrameShape(QFrame::Shape::StyledPanel);
        frame_12->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_12);
        verticalLayout_11->setObjectName("verticalLayout_11");
        frame_13 = new QFrame(frame_12);
        frame_13->setObjectName("frame_13");
        frame_13->setStyleSheet(QString::fromUtf8("border: none;"));
        frame_13->setFrameShape(QFrame::Shape::StyledPanel);
        frame_13->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_13);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        label_2 = new QLabel(frame_13);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setPointSize(45);
        label_2->setFont(font1);

        horizontalLayout_18->addWidget(label_2);


        verticalLayout_11->addWidget(frame_13);

        buttonInizia = new QPushButton(frame_12);
        buttonInizia->setObjectName("buttonInizia");

        verticalLayout_11->addWidget(buttonInizia);

        buttonImporta = new QPushButton(frame_12);
        buttonImporta->setObjectName("buttonImporta");

        verticalLayout_11->addWidget(buttonImporta);


        verticalLayout_13->addWidget(frame_12);


        verticalLayout_10->addWidget(frame_11);

        verticalSpacer_4 = new QSpacerItem(20, 179, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        horizontalLayout_17->addWidget(frame_10);


        verticalLayout_12->addWidget(frame_9);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1500, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        toolBar->addAction(actionSalva);
        toolBar->addAction(actionCarica);
        toolBar->addAction(actionEsci);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
        actionCarica->setText(QCoreApplication::translate("MainWindow", "Carica", nullptr));
        actionEsci->setText(QCoreApplication::translate("MainWindow", "Esci", nullptr));
        labelLogo->setText(QCoreApplication::translate("MainWindow", "NOTECPP", nullptr));
        searchLabel->setText(QCoreApplication::translate("MainWindow", "Ricerca nota:", nullptr));
        lineSearch->setPlaceholderText(QCoreApplication::translate("MainWindow", "Inserisci chiave di ricerca", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "Chiudi/Apri Sidebar", nullptr));
        buttonNote->setText(QCoreApplication::translate("MainWindow", "Tutte le Note", nullptr));
        buttonPromemoria->setText(QCoreApplication::translate("MainWindow", "Note Promemoria", nullptr));
        buttonTask->setText(QCoreApplication::translate("MainWindow", "Note Task", nullptr));
        buttonMultimediali->setText(QCoreApplication::translate("MainWindow", "Note Multimediali", nullptr));
        buttonEtichetteAdd->setText(QCoreApplication::translate("MainWindow", "Aggiungi Etichetta", nullptr));
        label_9->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "Le tue etichette", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Titolo", nullptr));
        lineTitolo->setText(QString());
        lineTitolo->setPlaceholderText(QCoreApplication::translate("MainWindow", "Inserisci titolo", nullptr));
        boxTesto->setPlaceholderText(QCoreApplication::translate("MainWindow", "Inserisci nuova nota...", nullptr));
        labelImmagine->setText(QCoreApplication::translate("MainWindow", "Inserire immagine", nullptr));
        buttonImmagine->setText(QCoreApplication::translate("MainWindow", "Seleziona", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Aggiungi nota come task", nullptr));
        checkTask->setText(QCoreApplication::translate("MainWindow", "Seleziona", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "etichetta", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "assegnatore", nullptr));
        lineAssegnatore->setText(QString());
        lineAssegnatore->setPlaceholderText(QCoreApplication::translate("MainWindow", "io", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Scadenza", nullptr));
        buttonSetScadenza->setText(QCoreApplication::translate("MainWindow", "Seleziona Data", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Scadenza", nullptr));
        buttonClose->setText(QCoreApplication::translate("MainWindow", "Chiudi", nullptr));
        buttonSalva->setText(QCoreApplication::translate("MainWindow", "Salva", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Benvenuto!", nullptr));
        buttonInizia->setText(QCoreApplication::translate("MainWindow", "Inizia", nullptr));
        buttonImporta->setText(QCoreApplication::translate("MainWindow", "Importa", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
