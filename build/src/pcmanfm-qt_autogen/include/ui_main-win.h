/********************************************************************************
** Form generated from reading UI file 'main-win.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_2D_WIN_H
#define UI_MAIN_2D_WIN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <libpandafm/sidepane.h>
#include "statusbar.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGoUp;
    QAction *actionHome;
    QAction *actionReload;
    QAction *actionGo;
    QAction *actionQuit;
    QAction *actionAbout;
    QAction *actionNewWin;
    QAction *actionShowHidden;
    QAction *actionComputer;
    QAction *actionTrash;
    QAction *actionNetwork;
    QAction *actionDesktop;
    QAction *actionAddToBookmarks;
    QAction *actionApplications;
    QAction *actionReload_2;
    QAction *actionIconView;
    QAction *actionCompactView;
    QAction *actionDetailedList;
    QAction *actionThumbnailView;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionSelectAll;
    QAction *actionPreferences;
    QAction *actionAscending;
    QAction *actionDescending;
    QAction *actionByFileName;
    QAction *actionByMTime;
    QAction *actionByDTime;
    QAction *actionByFileType;
    QAction *actionByOwner;
    QAction *actionByGroup;
    QAction *actionFolderFirst;
    QAction *actionHiddenLast;
    QAction *actionPreserveSorting;
    QAction *actionNewTab;
    QAction *actionGoBack;
    QAction *actionGoForward;
    QAction *actionInvertSelection;
    QAction *actionDelete;
    QAction *actionRename;
    QAction *actionCloseTab;
    QAction *actionFileProperties;
    QAction *actionFolderProperties;
    QAction *actionCaseSensitive;
    QAction *actionByFileSize;
    QAction *actionCloseWindow;
    QAction *actionEdit_Bookmarks;
    QAction *actionOpenTerminal;
    QAction *actionOpenAsRoot;
    QAction *actionEditBookmarks;
    QAction *actionNewFolder;
    QAction *actionNewBlankFile;
    QAction *actionFindFiles;
    QAction *actionFilter;
    QAction *actionUnfilter;
    QAction *actionCloseLeft;
    QAction *actionCloseRight;
    QAction *actionCloseOther;
    QAction *actionMenu_bar;
    QAction *actionMenu;
    QAction *actionPreserveView;
    QAction *actionConnectToServer;
    QAction *actionLocationBar;
    QAction *actionPathButtons;
    QAction *actionBulkRename;
    QAction *actionShowFilter;
    QAction *actionSplitView;
    QAction *actionCopyFullPath;
    QAction *actionShowThumbnails;
    QAction *actionSidePane;
    QAction *actionHiddenShortcuts;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    Fm::SidePane *sidePane;
    QSplitter *viewSplitter;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuCreateNew;
    QMenu *menu_Help;
    QMenu *menu_View;
    QMenu *menuSorting;
    QMenu *menu_View_2;
    QMenu *menuToolbars;
    QMenu *menuPathBarStyle;
    QMenu *menuFiltering;
    QMenu *menu_Edit;
    QMenu *menu_Bookmarks;
    QMenu *menu_Go;
    QMenu *menu_Tool;
    PCManFM::StatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(460, 369);
        QIcon icon;
        QString iconThemeName = QString::fromUtf8("folder");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        MainWindow->setWindowIcon(icon);
        actionGoUp = new QAction(MainWindow);
        actionGoUp->setObjectName(QString::fromUtf8("actionGoUp"));
        QIcon icon1;
        iconThemeName = QString::fromUtf8("go-up");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon1 = QIcon::fromTheme(iconThemeName);
        } else {
            icon1.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoUp->setIcon(icon1);
        actionHome = new QAction(MainWindow);
        actionHome->setObjectName(QString::fromUtf8("actionHome"));
        QIcon icon2;
        iconThemeName = QString::fromUtf8("user-home");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon2 = QIcon::fromTheme(iconThemeName);
        } else {
            icon2.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionHome->setIcon(icon2);
        actionReload = new QAction(MainWindow);
        actionReload->setObjectName(QString::fromUtf8("actionReload"));
        QIcon icon3;
        iconThemeName = QString::fromUtf8("view-refresh");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon3 = QIcon::fromTheme(iconThemeName);
        } else {
            icon3.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionReload->setIcon(icon3);
        actionGo = new QAction(MainWindow);
        actionGo->setObjectName(QString::fromUtf8("actionGo"));
        QIcon icon4;
        iconThemeName = QString::fromUtf8("go-jump");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon4 = QIcon::fromTheme(iconThemeName);
        } else {
            icon4.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGo->setIcon(icon4);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        QIcon icon5;
        iconThemeName = QString::fromUtf8("application-exit");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon5 = QIcon::fromTheme(iconThemeName);
        } else {
            icon5.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionQuit->setIcon(icon5);
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        QIcon icon6;
        iconThemeName = QString::fromUtf8("help-about");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon6 = QIcon::fromTheme(iconThemeName);
        } else {
            icon6.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAbout->setIcon(icon6);
        actionNewWin = new QAction(MainWindow);
        actionNewWin->setObjectName(QString::fromUtf8("actionNewWin"));
        QIcon icon7;
        iconThemeName = QString::fromUtf8("window-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon7 = QIcon::fromTheme(iconThemeName);
        } else {
            icon7.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewWin->setIcon(icon7);
        actionShowHidden = new QAction(MainWindow);
        actionShowHidden->setObjectName(QString::fromUtf8("actionShowHidden"));
        actionShowHidden->setCheckable(true);
        actionComputer = new QAction(MainWindow);
        actionComputer->setObjectName(QString::fromUtf8("actionComputer"));
        QIcon icon8;
        iconThemeName = QString::fromUtf8("computer");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon8 = QIcon::fromTheme(iconThemeName);
        } else {
            icon8.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionComputer->setIcon(icon8);
        actionTrash = new QAction(MainWindow);
        actionTrash->setObjectName(QString::fromUtf8("actionTrash"));
        QIcon icon9;
        iconThemeName = QString::fromUtf8("user-trash");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon9 = QIcon::fromTheme(iconThemeName);
        } else {
            icon9.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionTrash->setIcon(icon9);
        actionNetwork = new QAction(MainWindow);
        actionNetwork->setObjectName(QString::fromUtf8("actionNetwork"));
        actionDesktop = new QAction(MainWindow);
        actionDesktop->setObjectName(QString::fromUtf8("actionDesktop"));
        QIcon icon10;
        iconThemeName = QString::fromUtf8("user-desktop");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon10 = QIcon::fromTheme(iconThemeName);
        } else {
            icon10.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDesktop->setIcon(icon10);
        actionAddToBookmarks = new QAction(MainWindow);
        actionAddToBookmarks->setObjectName(QString::fromUtf8("actionAddToBookmarks"));
        QIcon icon11;
        iconThemeName = QString::fromUtf8("list-add");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon11 = QIcon::fromTheme(iconThemeName);
        } else {
            icon11.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionAddToBookmarks->setIcon(icon11);
        actionApplications = new QAction(MainWindow);
        actionApplications->setObjectName(QString::fromUtf8("actionApplications"));
        actionReload_2 = new QAction(MainWindow);
        actionReload_2->setObjectName(QString::fromUtf8("actionReload_2"));
        actionIconView = new QAction(MainWindow);
        actionIconView->setObjectName(QString::fromUtf8("actionIconView"));
        actionIconView->setCheckable(true);
        actionCompactView = new QAction(MainWindow);
        actionCompactView->setObjectName(QString::fromUtf8("actionCompactView"));
        actionCompactView->setCheckable(true);
        actionDetailedList = new QAction(MainWindow);
        actionDetailedList->setObjectName(QString::fromUtf8("actionDetailedList"));
        actionDetailedList->setCheckable(true);
        actionThumbnailView = new QAction(MainWindow);
        actionThumbnailView->setObjectName(QString::fromUtf8("actionThumbnailView"));
        actionThumbnailView->setCheckable(true);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon12;
        iconThemeName = QString::fromUtf8("edit-cut");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon12 = QIcon::fromTheme(iconThemeName);
        } else {
            icon12.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCut->setIcon(icon12);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon13;
        iconThemeName = QString::fromUtf8("edit-copy");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon13 = QIcon::fromTheme(iconThemeName);
        } else {
            icon13.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionCopy->setIcon(icon13);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon14;
        iconThemeName = QString::fromUtf8("edit-paste");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon14 = QIcon::fromTheme(iconThemeName);
        } else {
            icon14.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionPaste->setIcon(icon14);
        actionSelectAll = new QAction(MainWindow);
        actionSelectAll->setObjectName(QString::fromUtf8("actionSelectAll"));
        actionPreferences = new QAction(MainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionAscending = new QAction(MainWindow);
        actionAscending->setObjectName(QString::fromUtf8("actionAscending"));
        actionAscending->setCheckable(true);
        actionDescending = new QAction(MainWindow);
        actionDescending->setObjectName(QString::fromUtf8("actionDescending"));
        actionDescending->setCheckable(true);
        actionByFileName = new QAction(MainWindow);
        actionByFileName->setObjectName(QString::fromUtf8("actionByFileName"));
        actionByFileName->setCheckable(true);
        actionByMTime = new QAction(MainWindow);
        actionByMTime->setObjectName(QString::fromUtf8("actionByMTime"));
        actionByMTime->setCheckable(true);
        actionByDTime = new QAction(MainWindow);
        actionByDTime->setObjectName(QString::fromUtf8("actionByDTime"));
        actionByDTime->setCheckable(true);
        actionByFileType = new QAction(MainWindow);
        actionByFileType->setObjectName(QString::fromUtf8("actionByFileType"));
        actionByFileType->setCheckable(true);
        actionByOwner = new QAction(MainWindow);
        actionByOwner->setObjectName(QString::fromUtf8("actionByOwner"));
        actionByOwner->setCheckable(true);
        actionByGroup = new QAction(MainWindow);
        actionByGroup->setObjectName(QString::fromUtf8("actionByGroup"));
        actionByGroup->setCheckable(true);
        actionFolderFirst = new QAction(MainWindow);
        actionFolderFirst->setObjectName(QString::fromUtf8("actionFolderFirst"));
        actionFolderFirst->setCheckable(true);
        actionHiddenLast = new QAction(MainWindow);
        actionHiddenLast->setObjectName(QString::fromUtf8("actionHiddenLast"));
        actionHiddenLast->setCheckable(true);
        actionPreserveSorting = new QAction(MainWindow);
        actionPreserveSorting->setObjectName(QString::fromUtf8("actionPreserveSorting"));
        actionPreserveSorting->setCheckable(true);
        actionNewTab = new QAction(MainWindow);
        actionNewTab->setObjectName(QString::fromUtf8("actionNewTab"));
        actionNewTab->setIcon(icon7);
        actionGoBack = new QAction(MainWindow);
        actionGoBack->setObjectName(QString::fromUtf8("actionGoBack"));
        QIcon icon15;
        iconThemeName = QString::fromUtf8("go-previous");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon15 = QIcon::fromTheme(iconThemeName);
        } else {
            icon15.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoBack->setIcon(icon15);
        actionGoForward = new QAction(MainWindow);
        actionGoForward->setObjectName(QString::fromUtf8("actionGoForward"));
        QIcon icon16;
        iconThemeName = QString::fromUtf8("go-next");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon16 = QIcon::fromTheme(iconThemeName);
        } else {
            icon16.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionGoForward->setIcon(icon16);
        actionInvertSelection = new QAction(MainWindow);
        actionInvertSelection->setObjectName(QString::fromUtf8("actionInvertSelection"));
        actionDelete = new QAction(MainWindow);
        actionDelete->setObjectName(QString::fromUtf8("actionDelete"));
        QIcon icon17;
        iconThemeName = QString::fromUtf8("edit-delete");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon17 = QIcon::fromTheme(iconThemeName);
        } else {
            icon17.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionDelete->setIcon(icon17);
        actionRename = new QAction(MainWindow);
        actionRename->setObjectName(QString::fromUtf8("actionRename"));
        actionCloseTab = new QAction(MainWindow);
        actionCloseTab->setObjectName(QString::fromUtf8("actionCloseTab"));
        actionFileProperties = new QAction(MainWindow);
        actionFileProperties->setObjectName(QString::fromUtf8("actionFileProperties"));
        actionFolderProperties = new QAction(MainWindow);
        actionFolderProperties->setObjectName(QString::fromUtf8("actionFolderProperties"));
        actionCaseSensitive = new QAction(MainWindow);
        actionCaseSensitive->setObjectName(QString::fromUtf8("actionCaseSensitive"));
        actionCaseSensitive->setCheckable(true);
        actionByFileSize = new QAction(MainWindow);
        actionByFileSize->setObjectName(QString::fromUtf8("actionByFileSize"));
        actionByFileSize->setCheckable(true);
        actionCloseWindow = new QAction(MainWindow);
        actionCloseWindow->setObjectName(QString::fromUtf8("actionCloseWindow"));
        actionEdit_Bookmarks = new QAction(MainWindow);
        actionEdit_Bookmarks->setObjectName(QString::fromUtf8("actionEdit_Bookmarks"));
        actionOpenTerminal = new QAction(MainWindow);
        actionOpenTerminal->setObjectName(QString::fromUtf8("actionOpenTerminal"));
        actionOpenAsRoot = new QAction(MainWindow);
        actionOpenAsRoot->setObjectName(QString::fromUtf8("actionOpenAsRoot"));
        actionEditBookmarks = new QAction(MainWindow);
        actionEditBookmarks->setObjectName(QString::fromUtf8("actionEditBookmarks"));
        actionNewFolder = new QAction(MainWindow);
        actionNewFolder->setObjectName(QString::fromUtf8("actionNewFolder"));
        QIcon icon18;
        iconThemeName = QString::fromUtf8("folder-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon18 = QIcon::fromTheme(iconThemeName);
        } else {
            icon18.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewFolder->setIcon(icon18);
        actionNewBlankFile = new QAction(MainWindow);
        actionNewBlankFile->setObjectName(QString::fromUtf8("actionNewBlankFile"));
        QIcon icon19;
        iconThemeName = QString::fromUtf8("document-new");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon19 = QIcon::fromTheme(iconThemeName);
        } else {
            icon19.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionNewBlankFile->setIcon(icon19);
        actionFindFiles = new QAction(MainWindow);
        actionFindFiles->setObjectName(QString::fromUtf8("actionFindFiles"));
        actionFilter = new QAction(MainWindow);
        actionFilter->setObjectName(QString::fromUtf8("actionFilter"));
        actionFilter->setCheckable(true);
        actionUnfilter = new QAction(MainWindow);
        actionUnfilter->setObjectName(QString::fromUtf8("actionUnfilter"));
        actionCloseLeft = new QAction(MainWindow);
        actionCloseLeft->setObjectName(QString::fromUtf8("actionCloseLeft"));
        actionCloseLeft->setIcon(icon15);
        actionCloseRight = new QAction(MainWindow);
        actionCloseRight->setObjectName(QString::fromUtf8("actionCloseRight"));
        actionCloseRight->setIcon(icon16);
        actionCloseOther = new QAction(MainWindow);
        actionCloseOther->setObjectName(QString::fromUtf8("actionCloseOther"));
        actionMenu_bar = new QAction(MainWindow);
        actionMenu_bar->setObjectName(QString::fromUtf8("actionMenu_bar"));
        actionMenu_bar->setCheckable(true);
        actionMenu = new QAction(MainWindow);
        actionMenu->setObjectName(QString::fromUtf8("actionMenu"));
        QIcon icon20;
        iconThemeName = QString::fromUtf8("application-menu");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon20 = QIcon::fromTheme(iconThemeName);
        } else {
            icon20.addFile(QString::fromUtf8("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        actionMenu->setIcon(icon20);
        actionPreserveView = new QAction(MainWindow);
        actionPreserveView->setObjectName(QString::fromUtf8("actionPreserveView"));
        actionPreserveView->setCheckable(true);
        actionConnectToServer = new QAction(MainWindow);
        actionConnectToServer->setObjectName(QString::fromUtf8("actionConnectToServer"));
        actionLocationBar = new QAction(MainWindow);
        actionLocationBar->setObjectName(QString::fromUtf8("actionLocationBar"));
        actionLocationBar->setCheckable(true);
        actionPathButtons = new QAction(MainWindow);
        actionPathButtons->setObjectName(QString::fromUtf8("actionPathButtons"));
        actionPathButtons->setCheckable(true);
        actionBulkRename = new QAction(MainWindow);
        actionBulkRename->setObjectName(QString::fromUtf8("actionBulkRename"));
        actionShowFilter = new QAction(MainWindow);
        actionShowFilter->setObjectName(QString::fromUtf8("actionShowFilter"));
        actionSplitView = new QAction(MainWindow);
        actionSplitView->setObjectName(QString::fromUtf8("actionSplitView"));
        actionSplitView->setCheckable(true);
        actionCopyFullPath = new QAction(MainWindow);
        actionCopyFullPath->setObjectName(QString::fromUtf8("actionCopyFullPath"));
        actionShowThumbnails = new QAction(MainWindow);
        actionShowThumbnails->setObjectName(QString::fromUtf8("actionShowThumbnails"));
        actionShowThumbnails->setCheckable(true);
        actionShowThumbnails->setChecked(true);
        actionSidePane = new QAction(MainWindow);
        actionSidePane->setObjectName(QString::fromUtf8("actionSidePane"));
        actionSidePane->setCheckable(true);
        actionHiddenShortcuts = new QAction(MainWindow);
        actionHiddenShortcuts->setObjectName(QString::fromUtf8("actionHiddenShortcuts"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        sidePane = new Fm::SidePane(splitter);
        sidePane->setObjectName(QString::fromUtf8("sidePane"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sidePane->sizePolicy().hasHeightForWidth());
        sidePane->setSizePolicy(sizePolicy);
        splitter->addWidget(sidePane);
        viewSplitter = new QSplitter(splitter);
        viewSplitter->setObjectName(QString::fromUtf8("viewSplitter"));
        viewSplitter->setOrientation(Qt::Horizontal);
        splitter->addWidget(viewSplitter);

        verticalLayout->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 460, 30));
        menubar->setContextMenuPolicy(Qt::PreventContextMenu);
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuCreateNew = new QMenu(menu_File);
        menuCreateNew->setObjectName(QString::fromUtf8("menuCreateNew"));
        menu_Help = new QMenu(menubar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuSorting = new QMenu(menu_View);
        menuSorting->setObjectName(QString::fromUtf8("menuSorting"));
        menu_View_2 = new QMenu(menu_View);
        menu_View_2->setObjectName(QString::fromUtf8("menu_View_2"));
        menuToolbars = new QMenu(menu_View);
        menuToolbars->setObjectName(QString::fromUtf8("menuToolbars"));
        menuPathBarStyle = new QMenu(menu_View);
        menuPathBarStyle->setObjectName(QString::fromUtf8("menuPathBarStyle"));
        menuFiltering = new QMenu(menu_View);
        menuFiltering->setObjectName(QString::fromUtf8("menuFiltering"));
        menu_Edit = new QMenu(menubar);
        menu_Edit->setObjectName(QString::fromUtf8("menu_Edit"));
        menu_Bookmarks = new QMenu(menubar);
        menu_Bookmarks->setObjectName(QString::fromUtf8("menu_Bookmarks"));
        menu_Go = new QMenu(menubar);
        menu_Go->setObjectName(QString::fromUtf8("menu_Go"));
        menu_Tool = new QMenu(menubar);
        menu_Tool->setObjectName(QString::fromUtf8("menu_Tool"));
        MainWindow->setMenuBar(menubar);
        statusbar = new PCManFM::StatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setContextMenuPolicy(Qt::PreventContextMenu);
        toolBar->setMovable(false);
        toolBar->setFloatable(false);
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menu_Edit->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menu_Go->menuAction());
        menubar->addAction(menu_Bookmarks->menuAction());
        menubar->addAction(menu_Tool->menuAction());
        menubar->addAction(menu_Help->menuAction());
        menu_File->addAction(actionNewTab);
        menu_File->addAction(actionNewWin);
        menu_File->addSeparator();
        menu_File->addAction(menuCreateNew->menuAction());
        menu_File->addSeparator();
        menu_File->addAction(actionFileProperties);
        menu_File->addAction(actionFolderProperties);
        menu_File->addSeparator();
        menu_File->addAction(actionCloseTab);
        menu_File->addAction(actionCloseWindow);
        menuCreateNew->addAction(actionNewFolder);
        menuCreateNew->addAction(actionNewBlankFile);
        menu_Help->addAction(actionAbout);
        menu_Help->addAction(actionHiddenShortcuts);
        menu_View->addAction(actionReload);
        menu_View->addSeparator();
        menu_View->addAction(actionShowHidden);
        menu_View->addAction(actionShowThumbnails);
        menu_View->addAction(actionSplitView);
        menu_View->addAction(menuSorting->menuAction());
        menu_View->addAction(menu_View_2->menuAction());
        menu_View->addAction(actionPreserveView);
        menu_View->addSeparator();
        menu_View->addAction(actionSidePane);
        menu_View->addAction(menuToolbars->menuAction());
        menu_View->addAction(menuPathBarStyle->menuAction());
        menu_View->addSeparator();
        menu_View->addAction(menuFiltering->menuAction());
        menuSorting->addAction(actionByFileName);
        menuSorting->addAction(actionByMTime);
        menuSorting->addAction(actionByDTime);
        menuSorting->addAction(actionByFileSize);
        menuSorting->addAction(actionByFileType);
        menuSorting->addAction(actionByOwner);
        menuSorting->addAction(actionByGroup);
        menuSorting->addSeparator();
        menuSorting->addAction(actionAscending);
        menuSorting->addAction(actionDescending);
        menuSorting->addSeparator();
        menuSorting->addAction(actionFolderFirst);
        menuSorting->addAction(actionHiddenLast);
        menuSorting->addAction(actionCaseSensitive);
        menu_View_2->addAction(actionIconView);
        menu_View_2->addAction(actionThumbnailView);
        menu_View_2->addAction(actionCompactView);
        menu_View_2->addAction(actionDetailedList);
        menu_View_2->addSeparator();
        menuToolbars->addAction(actionFilter);
        menuToolbars->addAction(actionMenu_bar);
        menuPathBarStyle->addAction(actionLocationBar);
        menuPathBarStyle->addAction(actionPathButtons);
        menuFiltering->addAction(actionShowFilter);
        menuFiltering->addAction(actionUnfilter);
        menu_Edit->addAction(actionCut);
        menu_Edit->addAction(actionCopy);
        menu_Edit->addAction(actionPaste);
        menu_Edit->addAction(actionRename);
        menu_Edit->addAction(actionDelete);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionSelectAll);
        menu_Edit->addAction(actionInvertSelection);
        menu_Edit->addSeparator();
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionBulkRename);
        menu_Edit->addSeparator();
        menu_Edit->addAction(actionPreferences);
        menu_Bookmarks->addAction(actionAddToBookmarks);
        menu_Bookmarks->addAction(actionEditBookmarks);
        menu_Go->addAction(actionHome);
        menu_Go->addAction(actionDesktop);
        menu_Go->addAction(actionComputer);
        menu_Go->addAction(actionTrash);
        menu_Go->addAction(actionNetwork);
        menu_Go->addAction(actionApplications);
        menu_Go->addSeparator();
        menu_Go->addAction(actionGoBack);
        menu_Go->addAction(actionGoForward);
        menu_Go->addAction(actionGoUp);
        menu_Go->addSeparator();
        menu_Go->addAction(actionConnectToServer);
        menu_Tool->addAction(actionOpenTerminal);
        menu_Tool->addAction(actionOpenAsRoot);
        menu_Tool->addAction(actionCopyFullPath);
        menu_Tool->addAction(actionFindFiles);
        toolBar->addAction(actionNewTab);
        toolBar->addAction(actionGoBack);
        toolBar->addAction(actionGoForward);
        toolBar->addAction(actionGoUp);
        toolBar->addAction(actionReload);
        toolBar->addSeparator();
        toolBar->addAction(actionIconView);
        toolBar->addAction(actionThumbnailView);
        toolBar->addAction(actionCompactView);
        toolBar->addAction(actionDetailedList);
        toolBar->addSeparator();
        toolBar->addAction(actionGo);
        toolBar->addAction(actionMenu);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "File Manager", nullptr));
        actionGoUp->setText(QApplication::translate("MainWindow", "Go &Up", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGoUp->setToolTip(QApplication::translate("MainWindow", "Go Up", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGoUp->setShortcut(QApplication::translate("MainWindow", "Alt+Up", nullptr));
#endif // QT_NO_SHORTCUT
        actionHome->setText(QApplication::translate("MainWindow", "&Home", nullptr));
#ifndef QT_NO_SHORTCUT
        actionHome->setShortcut(QApplication::translate("MainWindow", "Alt+Home", nullptr));
#endif // QT_NO_SHORTCUT
        actionReload->setText(QApplication::translate("MainWindow", "&Reload", nullptr));
#ifndef QT_NO_SHORTCUT
        actionReload->setShortcut(QApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_NO_SHORTCUT
        actionGo->setText(QApplication::translate("MainWindow", "Go", nullptr));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        actionAbout->setText(QApplication::translate("MainWindow", "&About", nullptr));
        actionNewWin->setText(QApplication::translate("MainWindow", "&New Window", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewWin->setToolTip(QApplication::translate("MainWindow", "New Window", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewWin->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowHidden->setText(QApplication::translate("MainWindow", "Show &Hidden", nullptr));
#ifndef QT_NO_SHORTCUT
        actionShowHidden->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        actionComputer->setText(QApplication::translate("MainWindow", "&Computer", nullptr));
        actionTrash->setText(QApplication::translate("MainWindow", "&Trash", nullptr));
        actionNetwork->setText(QApplication::translate("MainWindow", "&Network", nullptr));
        actionDesktop->setText(QApplication::translate("MainWindow", "&Desktop", nullptr));
        actionAddToBookmarks->setText(QApplication::translate("MainWindow", "&Add to Bookmarks", nullptr));
        actionApplications->setText(QApplication::translate("MainWindow", "&Applications", nullptr));
        actionReload_2->setText(QApplication::translate("MainWindow", "Reload", nullptr));
        actionIconView->setText(QApplication::translate("MainWindow", "&Icon View", nullptr));
        actionCompactView->setText(QApplication::translate("MainWindow", "&Compact View", nullptr));
        actionDetailedList->setText(QApplication::translate("MainWindow", "&Detailed List", nullptr));
        actionThumbnailView->setText(QApplication::translate("MainWindow", "&Thumbnail View", nullptr));
        actionCut->setText(QApplication::translate("MainWindow", "Cu&t", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopy->setText(QApplication::translate("MainWindow", "&Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("MainWindow", "&Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionSelectAll->setText(QApplication::translate("MainWindow", "Select &All", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSelectAll->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", nullptr));
#endif // QT_NO_SHORTCUT
        actionPreferences->setText(QApplication::translate("MainWindow", "Pr&eferences", nullptr));
        actionAscending->setText(QApplication::translate("MainWindow", "&Ascending", nullptr));
        actionDescending->setText(QApplication::translate("MainWindow", "&Descending", nullptr));
        actionByFileName->setText(QApplication::translate("MainWindow", "&By File Name", nullptr));
        actionByMTime->setText(QApplication::translate("MainWindow", "By &Modification Time", nullptr));
        actionByDTime->setText(QApplication::translate("MainWindow", "By Deletio&n Time", nullptr));
        actionByFileType->setText(QApplication::translate("MainWindow", "By File &Type", nullptr));
        actionByOwner->setText(QApplication::translate("MainWindow", "By &Owner", nullptr));
        actionByGroup->setText(QApplication::translate("MainWindow", "By &Group", nullptr));
        actionFolderFirst->setText(QApplication::translate("MainWindow", "&Folder First", nullptr));
        actionHiddenLast->setText(QApplication::translate("MainWindow", "&Hidden Last", nullptr));
        actionPreserveSorting->setText(QApplication::translate("MainWindow", "&Preserve sorting for this folder", nullptr));
        actionNewTab->setText(QApplication::translate("MainWindow", "New &Tab", nullptr));
#ifndef QT_NO_TOOLTIP
        actionNewTab->setToolTip(QApplication::translate("MainWindow", "New Tab", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionNewTab->setShortcut(QApplication::translate("MainWindow", "Ctrl+T", nullptr));
#endif // QT_NO_SHORTCUT
        actionGoBack->setText(QApplication::translate("MainWindow", "Go &Back", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGoBack->setToolTip(QApplication::translate("MainWindow", "Go Back", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGoBack->setShortcut(QApplication::translate("MainWindow", "Alt+Left", nullptr));
#endif // QT_NO_SHORTCUT
        actionGoForward->setText(QApplication::translate("MainWindow", "Go &Forward", nullptr));
#ifndef QT_NO_TOOLTIP
        actionGoForward->setToolTip(QApplication::translate("MainWindow", "Go Forward", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionGoForward->setShortcut(QApplication::translate("MainWindow", "Alt+Right", nullptr));
#endif // QT_NO_SHORTCUT
        actionInvertSelection->setText(QApplication::translate("MainWindow", "&Invert Selection", nullptr));
        actionDelete->setText(QApplication::translate("MainWindow", "&Delete", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDelete->setShortcut(QApplication::translate("MainWindow", "Del", nullptr));
#endif // QT_NO_SHORTCUT
        actionRename->setText(QApplication::translate("MainWindow", "&Rename", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRename->setShortcut(QApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseTab->setText(QApplication::translate("MainWindow", "C&lose Tab", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCloseTab->setShortcut(QApplication::translate("MainWindow", "Ctrl+W", nullptr));
#endif // QT_NO_SHORTCUT
        actionFileProperties->setText(QApplication::translate("MainWindow", "File &Properties", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFileProperties->setShortcut(QApplication::translate("MainWindow", "Alt+Return", nullptr));
#endif // QT_NO_SHORTCUT
        actionFolderProperties->setText(QApplication::translate("MainWindow", "&Folder Properties", nullptr));
        actionCaseSensitive->setText(QApplication::translate("MainWindow", "&Case Sensitive", nullptr));
        actionByFileSize->setText(QApplication::translate("MainWindow", "By File &Size", nullptr));
        actionCloseWindow->setText(QApplication::translate("MainWindow", "&Close Window", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCloseWindow->setShortcut(QApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_NO_SHORTCUT
        actionEdit_Bookmarks->setText(QApplication::translate("MainWindow", "Edit Bookmarks", nullptr));
        actionOpenTerminal->setText(QApplication::translate("MainWindow", "Open &Terminal", nullptr));
#ifndef QT_NO_SHORTCUT
        actionOpenTerminal->setShortcut(QApplication::translate("MainWindow", "F4", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpenAsRoot->setText(QApplication::translate("MainWindow", "Open as &Root", nullptr));
        actionEditBookmarks->setText(QApplication::translate("MainWindow", "&Edit Bookmarks", nullptr));
        actionNewFolder->setText(QApplication::translate("MainWindow", "&Folder", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewFolder->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionNewBlankFile->setText(QApplication::translate("MainWindow", "&Blank File", nullptr));
#ifndef QT_NO_SHORTCUT
        actionNewBlankFile->setShortcut(QApplication::translate("MainWindow", "Ctrl+Alt+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionFindFiles->setText(QApplication::translate("MainWindow", "&Find Files", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFindFiles->setShortcut(QApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_NO_SHORTCUT
        actionFilter->setText(QApplication::translate("MainWindow", "Permanent &filter bar", nullptr));
#ifndef QT_NO_SHORTCUT
        actionFilter->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        actionUnfilter->setText(QApplication::translate("MainWindow", "&Clear All Filters", nullptr));
#ifndef QT_NO_SHORTCUT
        actionUnfilter->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+K", nullptr));
#endif // QT_NO_SHORTCUT
        actionCloseLeft->setText(QApplication::translate("MainWindow", "Close &previous tabs", nullptr));
        actionCloseRight->setText(QApplication::translate("MainWindow", "Close &next tabs", nullptr));
        actionCloseOther->setText(QApplication::translate("MainWindow", "Close &other tabs", nullptr));
        actionMenu_bar->setText(QApplication::translate("MainWindow", "&Menu bar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMenu_bar->setToolTip(QApplication::translate("MainWindow", "Menu bar", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionMenu_bar->setShortcut(QApplication::translate("MainWindow", "Ctrl+M", nullptr));
#endif // QT_NO_SHORTCUT
        actionMenu->setText(QApplication::translate("MainWindow", "Menu", nullptr));
#ifndef QT_NO_TOOLTIP
        actionMenu->setToolTip(QApplication::translate("MainWindow", "Menu", nullptr));
#endif // QT_NO_TOOLTIP
        actionPreserveView->setText(QApplication::translate("MainWindow", "&Preserve Settings for This Folder", nullptr));
        actionConnectToServer->setText(QApplication::translate("MainWindow", "Connect to &Server", nullptr));
        actionLocationBar->setText(QApplication::translate("MainWindow", "&Location", nullptr));
        actionPathButtons->setText(QApplication::translate("MainWindow", "&Path Buttons", nullptr));
        actionBulkRename->setText(QApplication::translate("MainWindow", "&Bulk Rename", nullptr));
#ifndef QT_NO_TOOLTIP
        actionBulkRename->setToolTip(QApplication::translate("MainWindow", "Bulk Rename", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionBulkRename->setShortcut(QApplication::translate("MainWindow", "Ctrl+F2", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowFilter->setText(QApplication::translate("MainWindow", "&Show/Focus Filter Bar", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShowFilter->setToolTip(QApplication::translate("MainWindow", "Show Filter Bar", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionShowFilter->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionSplitView->setText(QApplication::translate("MainWindow", "S&plit View", nullptr));
#ifndef QT_NO_TOOLTIP
        actionSplitView->setToolTip(QApplication::translate("MainWindow", "Split View", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_SHORTCUT
        actionSplitView->setShortcut(QApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_NO_SHORTCUT
        actionCopyFullPath->setText(QApplication::translate("MainWindow", "&Copy Full Path", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopyFullPath->setShortcut(QApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionShowThumbnails->setText(QApplication::translate("MainWindow", "Show Thumb&nails", nullptr));
#ifndef QT_NO_TOOLTIP
        actionShowThumbnails->setToolTip(QApplication::translate("MainWindow", "Show Thumbnails", nullptr));
#endif // QT_NO_TOOLTIP
        actionSidePane->setText(QApplication::translate("MainWindow", "S&ide Pane", nullptr));
#ifndef QT_NO_SHORTCUT
        actionSidePane->setShortcut(QApplication::translate("MainWindow", "F9", nullptr));
#endif // QT_NO_SHORTCUT
        actionHiddenShortcuts->setText(QApplication::translate("MainWindow", "Hidden &Shortcuts", nullptr));
        menu_File->setTitle(QApplication::translate("MainWindow", "&File", nullptr));
        menuCreateNew->setTitle(QApplication::translate("MainWindow", "C&reate New", nullptr));
        menu_Help->setTitle(QApplication::translate("MainWindow", "&Help", nullptr));
        menu_View->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuSorting->setTitle(QApplication::translate("MainWindow", "&Sorting", nullptr));
        menu_View_2->setTitle(QApplication::translate("MainWindow", "&View", nullptr));
        menuToolbars->setTitle(QApplication::translate("MainWindow", "&Toolbars", nullptr));
        menuPathBarStyle->setTitle(QApplication::translate("MainWindow", "Path &Bar", nullptr));
        menuFiltering->setTitle(QApplication::translate("MainWindow", "&Filtering", nullptr));
        menu_Edit->setTitle(QApplication::translate("MainWindow", "&Edit", nullptr));
        menu_Bookmarks->setTitle(QApplication::translate("MainWindow", "&Bookmarks", nullptr));
        menu_Go->setTitle(QApplication::translate("MainWindow", "&Go", nullptr));
        menu_Tool->setTitle(QApplication::translate("MainWindow", "&Tool", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "Main Toolbar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_2D_WIN_H
