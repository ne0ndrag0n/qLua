/********************************************************************************
** Form generated from reading UI file 'kahluaide.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KAHLUAIDE_H
#define UI_KAHLUAIDE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "Qsci/qsciscintilla.h"

QT_BEGIN_NAMESPACE

class Ui_KahluaIDE
{
public:
    QAction *action_New;
    QAction *action_Open;
    QAction *action_Save;
    QAction *actionSave_As;
    QAction *action_Print;
    QAction *actionE_xit;
    QAction *actionCu_t;
    QAction *action_Copy;
    QAction *action_Paste;
    QAction *actionCl_ear;
    QAction *actionNew_Function;
    QAction *action_Functions;
    QAction *actionS_plit;
    QAction *action_Output_Device;
    QAction *action_Find;
    QAction *action_Repeat_Last_Find;
    QAction *action_Change;
    QAction *action_Start;
    QAction *action_Restart;
    QAction *action_Continue;
    QAction *action_Step;
    QAction *action_Procedure_Step;
    QAction *action_Trace_On;
    QAction *actionToggle_Breakpoint;
    QAction *action_Clear_All_Breakpoints;
    QAction *actionSet_Next_Statement;
    QAction *action_Display;
    QAction *actionHelp_Path;
    QAction *action_Syntax_Checking;
    QAction *action_Index;
    QAction *action_Contents;
    QAction *action_Topic_s;
    QAction *actionUsing_Help;
    QAction *action_About;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QsciScintilla *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_File;
    QMenu *menu_Edit;
    QMenu *menu_View;
    QMenu *menu_Search;
    QMenu *menu_Run;
    QMenu *menu_Debug;
    QMenu *menu_Options;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *KahluaIDE)
    {
        if (KahluaIDE->objectName().isEmpty())
            KahluaIDE->setObjectName(QStringLiteral("KahluaIDE"));
        KahluaIDE->resize(400, 300);
        action_New = new QAction(KahluaIDE);
        action_New->setObjectName(QStringLiteral("action_New"));
        action_Open = new QAction(KahluaIDE);
        action_Open->setObjectName(QStringLiteral("action_Open"));
        action_Save = new QAction(KahluaIDE);
        action_Save->setObjectName(QStringLiteral("action_Save"));
        actionSave_As = new QAction(KahluaIDE);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        action_Print = new QAction(KahluaIDE);
        action_Print->setObjectName(QStringLiteral("action_Print"));
        actionE_xit = new QAction(KahluaIDE);
        actionE_xit->setObjectName(QStringLiteral("actionE_xit"));
        actionCu_t = new QAction(KahluaIDE);
        actionCu_t->setObjectName(QStringLiteral("actionCu_t"));
        action_Copy = new QAction(KahluaIDE);
        action_Copy->setObjectName(QStringLiteral("action_Copy"));
        action_Paste = new QAction(KahluaIDE);
        action_Paste->setObjectName(QStringLiteral("action_Paste"));
        actionCl_ear = new QAction(KahluaIDE);
        actionCl_ear->setObjectName(QStringLiteral("actionCl_ear"));
        actionNew_Function = new QAction(KahluaIDE);
        actionNew_Function->setObjectName(QStringLiteral("actionNew_Function"));
        action_Functions = new QAction(KahluaIDE);
        action_Functions->setObjectName(QStringLiteral("action_Functions"));
        actionS_plit = new QAction(KahluaIDE);
        actionS_plit->setObjectName(QStringLiteral("actionS_plit"));
        action_Output_Device = new QAction(KahluaIDE);
        action_Output_Device->setObjectName(QStringLiteral("action_Output_Device"));
        action_Find = new QAction(KahluaIDE);
        action_Find->setObjectName(QStringLiteral("action_Find"));
        action_Repeat_Last_Find = new QAction(KahluaIDE);
        action_Repeat_Last_Find->setObjectName(QStringLiteral("action_Repeat_Last_Find"));
        action_Change = new QAction(KahluaIDE);
        action_Change->setObjectName(QStringLiteral("action_Change"));
        action_Start = new QAction(KahluaIDE);
        action_Start->setObjectName(QStringLiteral("action_Start"));
        action_Restart = new QAction(KahluaIDE);
        action_Restart->setObjectName(QStringLiteral("action_Restart"));
        action_Continue = new QAction(KahluaIDE);
        action_Continue->setObjectName(QStringLiteral("action_Continue"));
        action_Step = new QAction(KahluaIDE);
        action_Step->setObjectName(QStringLiteral("action_Step"));
        action_Procedure_Step = new QAction(KahluaIDE);
        action_Procedure_Step->setObjectName(QStringLiteral("action_Procedure_Step"));
        action_Trace_On = new QAction(KahluaIDE);
        action_Trace_On->setObjectName(QStringLiteral("action_Trace_On"));
        actionToggle_Breakpoint = new QAction(KahluaIDE);
        actionToggle_Breakpoint->setObjectName(QStringLiteral("actionToggle_Breakpoint"));
        action_Clear_All_Breakpoints = new QAction(KahluaIDE);
        action_Clear_All_Breakpoints->setObjectName(QStringLiteral("action_Clear_All_Breakpoints"));
        actionSet_Next_Statement = new QAction(KahluaIDE);
        actionSet_Next_Statement->setObjectName(QStringLiteral("actionSet_Next_Statement"));
        action_Display = new QAction(KahluaIDE);
        action_Display->setObjectName(QStringLiteral("action_Display"));
        actionHelp_Path = new QAction(KahluaIDE);
        actionHelp_Path->setObjectName(QStringLiteral("actionHelp_Path"));
        action_Syntax_Checking = new QAction(KahluaIDE);
        action_Syntax_Checking->setObjectName(QStringLiteral("action_Syntax_Checking"));
        action_Index = new QAction(KahluaIDE);
        action_Index->setObjectName(QStringLiteral("action_Index"));
        action_Contents = new QAction(KahluaIDE);
        action_Contents->setObjectName(QStringLiteral("action_Contents"));
        action_Topic_s = new QAction(KahluaIDE);
        action_Topic_s->setObjectName(QStringLiteral("action_Topic_s"));
        actionUsing_Help = new QAction(KahluaIDE);
        actionUsing_Help->setObjectName(QStringLiteral("actionUsing_Help"));
        action_About = new QAction(KahluaIDE);
        action_About->setObjectName(QStringLiteral("action_About"));
        centralWidget = new QWidget(KahluaIDE);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QsciScintilla(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        verticalLayout->addWidget(textEdit);

        KahluaIDE->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(KahluaIDE);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menu_File = new QMenu(menuBar);
        menu_File->setObjectName(QStringLiteral("menu_File"));
        menu_Edit = new QMenu(menuBar);
        menu_Edit->setObjectName(QStringLiteral("menu_Edit"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QStringLiteral("menu_View"));
        menu_Search = new QMenu(menuBar);
        menu_Search->setObjectName(QStringLiteral("menu_Search"));
        menu_Run = new QMenu(menuBar);
        menu_Run->setObjectName(QStringLiteral("menu_Run"));
        menu_Debug = new QMenu(menuBar);
        menu_Debug->setObjectName(QStringLiteral("menu_Debug"));
        menu_Options = new QMenu(menuBar);
        menu_Options->setObjectName(QStringLiteral("menu_Options"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QStringLiteral("menu_Help"));
        KahluaIDE->setMenuBar(menuBar);
        statusBar = new QStatusBar(KahluaIDE);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        KahluaIDE->setStatusBar(statusBar);

        menuBar->addAction(menu_File->menuAction());
        menuBar->addAction(menu_Edit->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Search->menuAction());
        menuBar->addAction(menu_Run->menuAction());
        menuBar->addAction(menu_Debug->menuAction());
        menuBar->addAction(menu_Options->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menu_File->addAction(action_New);
        menu_File->addAction(action_Open);
        menu_File->addAction(action_Save);
        menu_File->addAction(actionSave_As);
        menu_File->addSeparator();
        menu_File->addAction(action_Print);
        menu_File->addSeparator();
        menu_File->addAction(actionE_xit);
        menu_Edit->addAction(actionCu_t);
        menu_Edit->addAction(action_Copy);
        menu_Edit->addAction(action_Paste);
        menu_Edit->addAction(actionCl_ear);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionNew_Function);
        menu_View->addAction(action_Functions);
        menu_View->addAction(actionS_plit);
        menu_View->addAction(action_Output_Device);
        menu_Search->addAction(action_Find);
        menu_Search->addAction(action_Repeat_Last_Find);
        menu_Search->addAction(action_Change);
        menu_Run->addAction(action_Start);
        menu_Run->addAction(action_Restart);
        menu_Run->addAction(action_Continue);
        menu_Debug->addAction(action_Step);
        menu_Debug->addAction(action_Procedure_Step);
        menu_Debug->addSeparator();
        menu_Debug->addAction(action_Trace_On);
        menu_Debug->addSeparator();
        menu_Debug->addAction(actionToggle_Breakpoint);
        menu_Debug->addAction(action_Clear_All_Breakpoints);
        menu_Debug->addAction(actionSet_Next_Statement);
        menu_Options->addAction(action_Display);
        menu_Options->addAction(actionHelp_Path);
        menu_Options->addAction(action_Syntax_Checking);
        menu_Help->addAction(action_Index);
        menu_Help->addAction(action_Contents);
        menu_Help->addAction(action_Topic_s);
        menu_Help->addAction(actionUsing_Help);
        menu_Help->addSeparator();
        menu_Help->addAction(action_About);

        retranslateUi(KahluaIDE);

        QMetaObject::connectSlotsByName(KahluaIDE);
    } // setupUi

    void retranslateUi(QMainWindow *KahluaIDE)
    {
        KahluaIDE->setWindowTitle(QApplication::translate("KahluaIDE", "Untitled - ne0ndrag0n qLua", 0));
        action_New->setText(QApplication::translate("KahluaIDE", "&New", 0));
        action_Open->setText(QApplication::translate("KahluaIDE", "&Open", 0));
        action_Save->setText(QApplication::translate("KahluaIDE", "&Save", 0));
        actionSave_As->setText(QApplication::translate("KahluaIDE", "Save &As...", 0));
        action_Print->setText(QApplication::translate("KahluaIDE", "&Print...", 0));
        actionE_xit->setText(QApplication::translate("KahluaIDE", "E&xit", 0));
        actionCu_t->setText(QApplication::translate("KahluaIDE", "Cu&t", 0));
        action_Copy->setText(QApplication::translate("KahluaIDE", "&Copy", 0));
        action_Paste->setText(QApplication::translate("KahluaIDE", "&Paste", 0));
        actionCl_ear->setText(QApplication::translate("KahluaIDE", "Cl&ear", 0));
        actionNew_Function->setText(QApplication::translate("KahluaIDE", "New &Function...", 0));
        action_Functions->setText(QApplication::translate("KahluaIDE", "&Functions...", 0));
        actionS_plit->setText(QApplication::translate("KahluaIDE", "S&plit", 0));
        action_Output_Device->setText(QApplication::translate("KahluaIDE", "&Output Device", 0));
        action_Find->setText(QApplication::translate("KahluaIDE", "&Find", 0));
        action_Repeat_Last_Find->setText(QApplication::translate("KahluaIDE", "&Repeat Last Find", 0));
        action_Change->setText(QApplication::translate("KahluaIDE", "&Change...", 0));
        action_Start->setText(QApplication::translate("KahluaIDE", "&Start", 0));
        action_Restart->setText(QApplication::translate("KahluaIDE", "&Restart", 0));
        action_Continue->setText(QApplication::translate("KahluaIDE", "&Continue", 0));
        action_Step->setText(QApplication::translate("KahluaIDE", "&Step", 0));
        action_Procedure_Step->setText(QApplication::translate("KahluaIDE", "&Procedure Step", 0));
        action_Trace_On->setText(QApplication::translate("KahluaIDE", "&Trace On", 0));
        actionToggle_Breakpoint->setText(QApplication::translate("KahluaIDE", "Toggle &Breakpoint", 0));
        action_Clear_All_Breakpoints->setText(QApplication::translate("KahluaIDE", "&Clear All Breakpoints", 0));
        actionSet_Next_Statement->setText(QApplication::translate("KahluaIDE", "Set &Next Statement", 0));
        action_Display->setText(QApplication::translate("KahluaIDE", "&Display...", 0));
        actionHelp_Path->setText(QApplication::translate("KahluaIDE", "Help &Path...", 0));
        action_Syntax_Checking->setText(QApplication::translate("KahluaIDE", "&Syntax Checking", 0));
        action_Index->setText(QApplication::translate("KahluaIDE", "&Index", 0));
        action_Contents->setText(QApplication::translate("KahluaIDE", "&Contents", 0));
        action_Topic_s->setText(QApplication::translate("KahluaIDE", "&Topic: %s", 0));
        actionUsing_Help->setText(QApplication::translate("KahluaIDE", "Using &Help", 0));
        action_About->setText(QApplication::translate("KahluaIDE", "&About...", 0));
#ifndef QT_NO_TOOLTIP
        textEdit->setToolTip(QString());
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        textEdit->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        menu_File->setTitle(QApplication::translate("KahluaIDE", "&File", 0));
        menu_Edit->setTitle(QApplication::translate("KahluaIDE", "&Edit", 0));
        menu_View->setTitle(QApplication::translate("KahluaIDE", "&View", 0));
        menu_Search->setTitle(QApplication::translate("KahluaIDE", "&Search", 0));
        menu_Run->setTitle(QApplication::translate("KahluaIDE", "&Run", 0));
        menu_Debug->setTitle(QApplication::translate("KahluaIDE", "&Debug", 0));
        menu_Options->setTitle(QApplication::translate("KahluaIDE", "&Options", 0));
        menu_Help->setTitle(QApplication::translate("KahluaIDE", "&Help", 0));
    } // retranslateUi

};

namespace Ui {
    class KahluaIDE: public Ui_KahluaIDE {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KAHLUAIDE_H
