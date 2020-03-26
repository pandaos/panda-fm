/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PCManFM__ViewFrame_t {
    QByteArrayData data[1];
    char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__ViewFrame_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__ViewFrame_t qt_meta_stringdata_PCManFM__ViewFrame = {
    {
QT_MOC_LITERAL(0, 0, 18) // "PCManFM::ViewFrame"

    },
    "PCManFM::ViewFrame"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__ViewFrame[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void PCManFM::ViewFrame::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::ViewFrame::staticMetaObject = { {
    &QFrame::staticMetaObject,
    qt_meta_stringdata_PCManFM__ViewFrame.data,
    qt_meta_data_PCManFM__ViewFrame,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::ViewFrame::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::ViewFrame::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__ViewFrame.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int PCManFM::ViewFrame::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_PCManFM__MainWindow_t {
    QByteArrayData data[115];
    char stringdata0[2713];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PCManFM__MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PCManFM__MainWindow_t qt_meta_stringdata_PCManFM__MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PCManFM::MainWindow"
QT_MOC_LITERAL(1, 20, 24), // "onPathEntryReturnPressed"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 14), // "onPathBarChdir"
QT_MOC_LITERAL(4, 61, 12), // "Fm::FilePath"
QT_MOC_LITERAL(5, 74, 7), // "dirPath"
QT_MOC_LITERAL(6, 82, 25), // "onPathBarMiddleClickChdir"
QT_MOC_LITERAL(7, 108, 25), // "on_actionNewTab_triggered"
QT_MOC_LITERAL(8, 134, 25), // "on_actionNewWin_triggered"
QT_MOC_LITERAL(9, 160, 28), // "on_actionNewFolder_triggered"
QT_MOC_LITERAL(10, 189, 31), // "on_actionNewBlankFile_triggered"
QT_MOC_LITERAL(11, 221, 27), // "on_actionCloseTab_triggered"
QT_MOC_LITERAL(12, 249, 30), // "on_actionCloseWindow_triggered"
QT_MOC_LITERAL(13, 280, 33), // "on_actionFileProperties_trigg..."
QT_MOC_LITERAL(14, 314, 35), // "on_actionFolderProperties_tri..."
QT_MOC_LITERAL(15, 350, 22), // "on_actionCut_triggered"
QT_MOC_LITERAL(16, 373, 23), // "on_actionCopy_triggered"
QT_MOC_LITERAL(17, 397, 24), // "on_actionPaste_triggered"
QT_MOC_LITERAL(18, 422, 25), // "on_actionDelete_triggered"
QT_MOC_LITERAL(19, 448, 25), // "on_actionRename_triggered"
QT_MOC_LITERAL(20, 474, 29), // "on_actionBulkRename_triggered"
QT_MOC_LITERAL(21, 504, 28), // "on_actionSelectAll_triggered"
QT_MOC_LITERAL(22, 533, 34), // "on_actionInvertSelection_trig..."
QT_MOC_LITERAL(23, 568, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(24, 599, 25), // "on_actionGoBack_triggered"
QT_MOC_LITERAL(25, 625, 28), // "on_actionGoForward_triggered"
QT_MOC_LITERAL(26, 654, 23), // "on_actionGoUp_triggered"
QT_MOC_LITERAL(27, 678, 23), // "on_actionHome_triggered"
QT_MOC_LITERAL(28, 702, 25), // "on_actionReload_triggered"
QT_MOC_LITERAL(29, 728, 34), // "on_actionConnectToServer_trig..."
QT_MOC_LITERAL(30, 763, 27), // "on_actionIconView_triggered"
QT_MOC_LITERAL(31, 791, 30), // "on_actionCompactView_triggered"
QT_MOC_LITERAL(32, 822, 31), // "on_actionDetailedList_triggered"
QT_MOC_LITERAL(33, 854, 32), // "on_actionThumbnailView_triggered"
QT_MOC_LITERAL(34, 887, 21), // "on_actionGo_triggered"
QT_MOC_LITERAL(35, 909, 29), // "on_actionShowHidden_triggered"
QT_MOC_LITERAL(36, 939, 5), // "check"
QT_MOC_LITERAL(37, 945, 33), // "on_actionShowThumbnails_trigg..."
QT_MOC_LITERAL(38, 979, 28), // "on_actionSplitView_triggered"
QT_MOC_LITERAL(39, 1008, 31), // "on_actionPreserveView_triggered"
QT_MOC_LITERAL(40, 1040, 7), // "checked"
QT_MOC_LITERAL(41, 1048, 29), // "on_actionByFileName_triggered"
QT_MOC_LITERAL(42, 1078, 26), // "on_actionByMTime_triggered"
QT_MOC_LITERAL(43, 1105, 26), // "on_actionByDTime_triggered"
QT_MOC_LITERAL(44, 1132, 26), // "on_actionByOwner_triggered"
QT_MOC_LITERAL(45, 1159, 26), // "on_actionByGroup_triggered"
QT_MOC_LITERAL(46, 1186, 29), // "on_actionByFileType_triggered"
QT_MOC_LITERAL(47, 1216, 29), // "on_actionByFileSize_triggered"
QT_MOC_LITERAL(48, 1246, 28), // "on_actionAscending_triggered"
QT_MOC_LITERAL(49, 1275, 29), // "on_actionDescending_triggered"
QT_MOC_LITERAL(50, 1305, 30), // "on_actionFolderFirst_triggered"
QT_MOC_LITERAL(51, 1336, 29), // "on_actionHiddenLast_triggered"
QT_MOC_LITERAL(52, 1366, 32), // "on_actionCaseSensitive_triggered"
QT_MOC_LITERAL(53, 1399, 25), // "on_actionFilter_triggered"
QT_MOC_LITERAL(54, 1425, 27), // "on_actionUnfilter_triggered"
QT_MOC_LITERAL(55, 1453, 29), // "on_actionShowFilter_triggered"
QT_MOC_LITERAL(56, 1483, 30), // "on_actionLocationBar_triggered"
QT_MOC_LITERAL(57, 1514, 30), // "on_actionPathButtons_triggered"
QT_MOC_LITERAL(58, 1545, 31), // "on_actionApplications_triggered"
QT_MOC_LITERAL(59, 1577, 27), // "on_actionComputer_triggered"
QT_MOC_LITERAL(60, 1605, 24), // "on_actionTrash_triggered"
QT_MOC_LITERAL(61, 1630, 26), // "on_actionNetwork_triggered"
QT_MOC_LITERAL(62, 1657, 26), // "on_actionDesktop_triggered"
QT_MOC_LITERAL(63, 1684, 33), // "on_actionAddToBookmarks_trigg..."
QT_MOC_LITERAL(64, 1718, 32), // "on_actionEditBookmarks_triggered"
QT_MOC_LITERAL(65, 1751, 31), // "on_actionOpenTerminal_triggered"
QT_MOC_LITERAL(66, 1783, 29), // "on_actionOpenAsRoot_triggered"
QT_MOC_LITERAL(67, 1813, 31), // "on_actionCopyFullPath_triggered"
QT_MOC_LITERAL(68, 1845, 28), // "on_actionFindFiles_triggered"
QT_MOC_LITERAL(69, 1874, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(70, 1899, 34), // "on_actionHiddenShortcuts_trig..."
QT_MOC_LITERAL(71, 1934, 25), // "onBookmarkActionTriggered"
QT_MOC_LITERAL(72, 1960, 22), // "onTabBarCloseRequested"
QT_MOC_LITERAL(73, 1983, 5), // "index"
QT_MOC_LITERAL(74, 1989, 22), // "onTabBarCurrentChanged"
QT_MOC_LITERAL(75, 2012, 16), // "onTabBarTabMoved"
QT_MOC_LITERAL(76, 2029, 4), // "from"
QT_MOC_LITERAL(77, 2034, 2), // "to"
QT_MOC_LITERAL(78, 2037, 17), // "onShortcutPrevTab"
QT_MOC_LITERAL(79, 2055, 17), // "onShortcutNextTab"
QT_MOC_LITERAL(80, 2073, 19), // "onShortcutJumpToTab"
QT_MOC_LITERAL(81, 2093, 28), // "onStackedWidgetWidgetRemoved"
QT_MOC_LITERAL(82, 2122, 21), // "onTabPageTitleChanged"
QT_MOC_LITERAL(83, 2144, 5), // "title"
QT_MOC_LITERAL(84, 2150, 22), // "onTabPageStatusChanged"
QT_MOC_LITERAL(85, 2173, 4), // "type"
QT_MOC_LITERAL(86, 2178, 10), // "statusText"
QT_MOC_LITERAL(87, 2189, 26), // "onTabPageSortFilterChanged"
QT_MOC_LITERAL(88, 2216, 24), // "onSidePaneChdirRequested"
QT_MOC_LITERAL(89, 2241, 4), // "path"
QT_MOC_LITERAL(90, 2246, 40), // "onSidePaneOpenFolderInNewWind..."
QT_MOC_LITERAL(91, 2287, 37), // "onSidePaneOpenFolderInNewTabR..."
QT_MOC_LITERAL(92, 2325, 39), // "onSidePaneOpenFolderInTermina..."
QT_MOC_LITERAL(93, 2365, 34), // "onSidePaneCreateNewFolderRequ..."
QT_MOC_LITERAL(94, 2400, 21), // "onSidePaneModeChanged"
QT_MOC_LITERAL(95, 2422, 18), // "Fm::SidePane::Mode"
QT_MOC_LITERAL(96, 2441, 4), // "mode"
QT_MOC_LITERAL(97, 2446, 27), // "on_actionSidePane_triggered"
QT_MOC_LITERAL(98, 2474, 15), // "onSplitterMoved"
QT_MOC_LITERAL(99, 2490, 3), // "pos"
QT_MOC_LITERAL(100, 2494, 12), // "onResetFocus"
QT_MOC_LITERAL(101, 2507, 24), // "onBackForwardContextMenu"
QT_MOC_LITERAL(102, 2532, 17), // "onFolderUnmounted"
QT_MOC_LITERAL(103, 2550, 14), // "tabContextMenu"
QT_MOC_LITERAL(104, 2565, 15), // "onTabBarClicked"
QT_MOC_LITERAL(105, 2581, 13), // "closeLeftTabs"
QT_MOC_LITERAL(106, 2595, 14), // "closeRightTabs"
QT_MOC_LITERAL(107, 2610, 14), // "closeOtherTabs"
QT_MOC_LITERAL(108, 2625, 14), // "focusPathEntry"
QT_MOC_LITERAL(109, 2640, 13), // "toggleMenuBar"
QT_MOC_LITERAL(110, 2654, 9), // "detachTab"
QT_MOC_LITERAL(111, 2664, 18), // "onBookmarksChanged"
QT_MOC_LITERAL(112, 2683, 20), // "onSettingHiddenPlace"
QT_MOC_LITERAL(113, 2704, 3), // "str"
QT_MOC_LITERAL(114, 2708, 4) // "hide"

    },
    "PCManFM::MainWindow\0onPathEntryReturnPressed\0"
    "\0onPathBarChdir\0Fm::FilePath\0dirPath\0"
    "onPathBarMiddleClickChdir\0"
    "on_actionNewTab_triggered\0"
    "on_actionNewWin_triggered\0"
    "on_actionNewFolder_triggered\0"
    "on_actionNewBlankFile_triggered\0"
    "on_actionCloseTab_triggered\0"
    "on_actionCloseWindow_triggered\0"
    "on_actionFileProperties_triggered\0"
    "on_actionFolderProperties_triggered\0"
    "on_actionCut_triggered\0on_actionCopy_triggered\0"
    "on_actionPaste_triggered\0"
    "on_actionDelete_triggered\0"
    "on_actionRename_triggered\0"
    "on_actionBulkRename_triggered\0"
    "on_actionSelectAll_triggered\0"
    "on_actionInvertSelection_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_actionGoBack_triggered\0"
    "on_actionGoForward_triggered\0"
    "on_actionGoUp_triggered\0on_actionHome_triggered\0"
    "on_actionReload_triggered\0"
    "on_actionConnectToServer_triggered\0"
    "on_actionIconView_triggered\0"
    "on_actionCompactView_triggered\0"
    "on_actionDetailedList_triggered\0"
    "on_actionThumbnailView_triggered\0"
    "on_actionGo_triggered\0"
    "on_actionShowHidden_triggered\0check\0"
    "on_actionShowThumbnails_triggered\0"
    "on_actionSplitView_triggered\0"
    "on_actionPreserveView_triggered\0checked\0"
    "on_actionByFileName_triggered\0"
    "on_actionByMTime_triggered\0"
    "on_actionByDTime_triggered\0"
    "on_actionByOwner_triggered\0"
    "on_actionByGroup_triggered\0"
    "on_actionByFileType_triggered\0"
    "on_actionByFileSize_triggered\0"
    "on_actionAscending_triggered\0"
    "on_actionDescending_triggered\0"
    "on_actionFolderFirst_triggered\0"
    "on_actionHiddenLast_triggered\0"
    "on_actionCaseSensitive_triggered\0"
    "on_actionFilter_triggered\0"
    "on_actionUnfilter_triggered\0"
    "on_actionShowFilter_triggered\0"
    "on_actionLocationBar_triggered\0"
    "on_actionPathButtons_triggered\0"
    "on_actionApplications_triggered\0"
    "on_actionComputer_triggered\0"
    "on_actionTrash_triggered\0"
    "on_actionNetwork_triggered\0"
    "on_actionDesktop_triggered\0"
    "on_actionAddToBookmarks_triggered\0"
    "on_actionEditBookmarks_triggered\0"
    "on_actionOpenTerminal_triggered\0"
    "on_actionOpenAsRoot_triggered\0"
    "on_actionCopyFullPath_triggered\0"
    "on_actionFindFiles_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionHiddenShortcuts_triggered\0"
    "onBookmarkActionTriggered\0"
    "onTabBarCloseRequested\0index\0"
    "onTabBarCurrentChanged\0onTabBarTabMoved\0"
    "from\0to\0onShortcutPrevTab\0onShortcutNextTab\0"
    "onShortcutJumpToTab\0onStackedWidgetWidgetRemoved\0"
    "onTabPageTitleChanged\0title\0"
    "onTabPageStatusChanged\0type\0statusText\0"
    "onTabPageSortFilterChanged\0"
    "onSidePaneChdirRequested\0path\0"
    "onSidePaneOpenFolderInNewWindowRequested\0"
    "onSidePaneOpenFolderInNewTabRequested\0"
    "onSidePaneOpenFolderInTerminalRequested\0"
    "onSidePaneCreateNewFolderRequested\0"
    "onSidePaneModeChanged\0Fm::SidePane::Mode\0"
    "mode\0on_actionSidePane_triggered\0"
    "onSplitterMoved\0pos\0onResetFocus\0"
    "onBackForwardContextMenu\0onFolderUnmounted\0"
    "tabContextMenu\0onTabBarClicked\0"
    "closeLeftTabs\0closeRightTabs\0"
    "closeOtherTabs\0focusPathEntry\0"
    "toggleMenuBar\0detachTab\0onBookmarksChanged\0"
    "onSettingHiddenPlace\0str\0hide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PCManFM__MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      97,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,  499,    2, 0x09 /* Protected */,
       3,    1,  500,    2, 0x09 /* Protected */,
       6,    1,  503,    2, 0x09 /* Protected */,
       7,    0,  506,    2, 0x09 /* Protected */,
       8,    0,  507,    2, 0x09 /* Protected */,
       9,    0,  508,    2, 0x09 /* Protected */,
      10,    0,  509,    2, 0x09 /* Protected */,
      11,    0,  510,    2, 0x09 /* Protected */,
      12,    0,  511,    2, 0x09 /* Protected */,
      13,    0,  512,    2, 0x09 /* Protected */,
      14,    0,  513,    2, 0x09 /* Protected */,
      15,    0,  514,    2, 0x09 /* Protected */,
      16,    0,  515,    2, 0x09 /* Protected */,
      17,    0,  516,    2, 0x09 /* Protected */,
      18,    0,  517,    2, 0x09 /* Protected */,
      19,    0,  518,    2, 0x09 /* Protected */,
      20,    0,  519,    2, 0x09 /* Protected */,
      21,    0,  520,    2, 0x09 /* Protected */,
      22,    0,  521,    2, 0x09 /* Protected */,
      23,    0,  522,    2, 0x09 /* Protected */,
      24,    0,  523,    2, 0x09 /* Protected */,
      25,    0,  524,    2, 0x09 /* Protected */,
      26,    0,  525,    2, 0x09 /* Protected */,
      27,    0,  526,    2, 0x09 /* Protected */,
      28,    0,  527,    2, 0x09 /* Protected */,
      29,    0,  528,    2, 0x09 /* Protected */,
      30,    0,  529,    2, 0x09 /* Protected */,
      31,    0,  530,    2, 0x09 /* Protected */,
      32,    0,  531,    2, 0x09 /* Protected */,
      33,    0,  532,    2, 0x09 /* Protected */,
      34,    0,  533,    2, 0x09 /* Protected */,
      35,    1,  534,    2, 0x09 /* Protected */,
      37,    1,  537,    2, 0x09 /* Protected */,
      38,    1,  540,    2, 0x09 /* Protected */,
      39,    1,  543,    2, 0x09 /* Protected */,
      41,    1,  546,    2, 0x09 /* Protected */,
      42,    1,  549,    2, 0x09 /* Protected */,
      43,    1,  552,    2, 0x09 /* Protected */,
      44,    1,  555,    2, 0x09 /* Protected */,
      45,    1,  558,    2, 0x09 /* Protected */,
      46,    1,  561,    2, 0x09 /* Protected */,
      47,    1,  564,    2, 0x09 /* Protected */,
      48,    1,  567,    2, 0x09 /* Protected */,
      49,    1,  570,    2, 0x09 /* Protected */,
      50,    1,  573,    2, 0x09 /* Protected */,
      51,    1,  576,    2, 0x09 /* Protected */,
      52,    1,  579,    2, 0x09 /* Protected */,
      53,    1,  582,    2, 0x09 /* Protected */,
      54,    0,  585,    2, 0x09 /* Protected */,
      55,    0,  586,    2, 0x09 /* Protected */,
      56,    1,  587,    2, 0x09 /* Protected */,
      57,    1,  590,    2, 0x09 /* Protected */,
      58,    0,  593,    2, 0x09 /* Protected */,
      59,    0,  594,    2, 0x09 /* Protected */,
      60,    0,  595,    2, 0x09 /* Protected */,
      61,    0,  596,    2, 0x09 /* Protected */,
      62,    0,  597,    2, 0x09 /* Protected */,
      63,    0,  598,    2, 0x09 /* Protected */,
      64,    0,  599,    2, 0x09 /* Protected */,
      65,    0,  600,    2, 0x09 /* Protected */,
      66,    0,  601,    2, 0x09 /* Protected */,
      67,    0,  602,    2, 0x09 /* Protected */,
      68,    0,  603,    2, 0x09 /* Protected */,
      69,    0,  604,    2, 0x09 /* Protected */,
      70,    0,  605,    2, 0x09 /* Protected */,
      71,    0,  606,    2, 0x09 /* Protected */,
      72,    1,  607,    2, 0x09 /* Protected */,
      74,    1,  610,    2, 0x09 /* Protected */,
      75,    2,  613,    2, 0x09 /* Protected */,
      78,    0,  618,    2, 0x09 /* Protected */,
      79,    0,  619,    2, 0x09 /* Protected */,
      80,    0,  620,    2, 0x09 /* Protected */,
      81,    1,  621,    2, 0x09 /* Protected */,
      82,    1,  624,    2, 0x09 /* Protected */,
      84,    2,  627,    2, 0x09 /* Protected */,
      87,    0,  632,    2, 0x09 /* Protected */,
      88,    2,  633,    2, 0x09 /* Protected */,
      90,    1,  638,    2, 0x09 /* Protected */,
      91,    1,  641,    2, 0x09 /* Protected */,
      92,    1,  644,    2, 0x09 /* Protected */,
      93,    1,  647,    2, 0x09 /* Protected */,
      94,    1,  650,    2, 0x09 /* Protected */,
      97,    1,  653,    2, 0x09 /* Protected */,
      98,    2,  656,    2, 0x09 /* Protected */,
     100,    0,  661,    2, 0x09 /* Protected */,
     101,    1,  662,    2, 0x09 /* Protected */,
     102,    0,  665,    2, 0x09 /* Protected */,
     103,    1,  666,    2, 0x09 /* Protected */,
     104,    1,  669,    2, 0x09 /* Protected */,
     105,    0,  672,    2, 0x09 /* Protected */,
     106,    0,  673,    2, 0x09 /* Protected */,
     107,    0,  674,    2, 0x09 /* Protected */,
     108,    0,  675,    2, 0x09 /* Protected */,
     109,    1,  676,    2, 0x09 /* Protected */,
     110,    0,  679,    2, 0x09 /* Protected */,
     111,    0,  680,    2, 0x09 /* Protected */,
     112,    2,  681,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   76,   77,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void, QMetaType::QString,   83,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   85,   86,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 4,   85,   89,
    QMetaType::Void, 0x80000000 | 4,   89,
    QMetaType::Void, 0x80000000 | 4,   89,
    QMetaType::Void, 0x80000000 | 4,   89,
    QMetaType::Void, 0x80000000 | 4,   89,
    QMetaType::Void, 0x80000000 | 95,   96,
    QMetaType::Void, QMetaType::Bool,   36,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   99,   73,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   99,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   99,
    QMetaType::Void, QMetaType::Int,   73,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   40,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,  113,  114,

       0        // eod
};

void PCManFM::MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onPathEntryReturnPressed(); break;
        case 1: _t->onPathBarChdir((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 2: _t->onPathBarMiddleClickChdir((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 3: _t->on_actionNewTab_triggered(); break;
        case 4: _t->on_actionNewWin_triggered(); break;
        case 5: _t->on_actionNewFolder_triggered(); break;
        case 6: _t->on_actionNewBlankFile_triggered(); break;
        case 7: _t->on_actionCloseTab_triggered(); break;
        case 8: _t->on_actionCloseWindow_triggered(); break;
        case 9: _t->on_actionFileProperties_triggered(); break;
        case 10: _t->on_actionFolderProperties_triggered(); break;
        case 11: _t->on_actionCut_triggered(); break;
        case 12: _t->on_actionCopy_triggered(); break;
        case 13: _t->on_actionPaste_triggered(); break;
        case 14: _t->on_actionDelete_triggered(); break;
        case 15: _t->on_actionRename_triggered(); break;
        case 16: _t->on_actionBulkRename_triggered(); break;
        case 17: _t->on_actionSelectAll_triggered(); break;
        case 18: _t->on_actionInvertSelection_triggered(); break;
        case 19: _t->on_actionPreferences_triggered(); break;
        case 20: _t->on_actionGoBack_triggered(); break;
        case 21: _t->on_actionGoForward_triggered(); break;
        case 22: _t->on_actionGoUp_triggered(); break;
        case 23: _t->on_actionHome_triggered(); break;
        case 24: _t->on_actionReload_triggered(); break;
        case 25: _t->on_actionConnectToServer_triggered(); break;
        case 26: _t->on_actionIconView_triggered(); break;
        case 27: _t->on_actionCompactView_triggered(); break;
        case 28: _t->on_actionDetailedList_triggered(); break;
        case 29: _t->on_actionThumbnailView_triggered(); break;
        case 30: _t->on_actionGo_triggered(); break;
        case 31: _t->on_actionShowHidden_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 32: _t->on_actionShowThumbnails_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 33: _t->on_actionSplitView_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 34: _t->on_actionPreserveView_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 35: _t->on_actionByFileName_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 36: _t->on_actionByMTime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 37: _t->on_actionByDTime_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_actionByOwner_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_actionByGroup_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_actionByFileType_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->on_actionByFileSize_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_actionAscending_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_actionDescending_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_actionFolderFirst_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 45: _t->on_actionHiddenLast_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_actionCaseSensitive_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_actionFilter_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 48: _t->on_actionUnfilter_triggered(); break;
        case 49: _t->on_actionShowFilter_triggered(); break;
        case 50: _t->on_actionLocationBar_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_actionPathButtons_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_actionApplications_triggered(); break;
        case 53: _t->on_actionComputer_triggered(); break;
        case 54: _t->on_actionTrash_triggered(); break;
        case 55: _t->on_actionNetwork_triggered(); break;
        case 56: _t->on_actionDesktop_triggered(); break;
        case 57: _t->on_actionAddToBookmarks_triggered(); break;
        case 58: _t->on_actionEditBookmarks_triggered(); break;
        case 59: _t->on_actionOpenTerminal_triggered(); break;
        case 60: _t->on_actionOpenAsRoot_triggered(); break;
        case 61: _t->on_actionCopyFullPath_triggered(); break;
        case 62: _t->on_actionFindFiles_triggered(); break;
        case 63: _t->on_actionAbout_triggered(); break;
        case 64: _t->on_actionHiddenShortcuts_triggered(); break;
        case 65: _t->onBookmarkActionTriggered(); break;
        case 66: _t->onTabBarCloseRequested((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 67: _t->onTabBarCurrentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 68: _t->onTabBarTabMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 69: _t->onShortcutPrevTab(); break;
        case 70: _t->onShortcutNextTab(); break;
        case 71: _t->onShortcutJumpToTab(); break;
        case 72: _t->onStackedWidgetWidgetRemoved((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 73: _t->onTabPageTitleChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 74: _t->onTabPageStatusChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 75: _t->onTabPageSortFilterChanged(); break;
        case 76: _t->onSidePaneChdirRequested((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const Fm::FilePath(*)>(_a[2]))); break;
        case 77: _t->onSidePaneOpenFolderInNewWindowRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 78: _t->onSidePaneOpenFolderInNewTabRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 79: _t->onSidePaneOpenFolderInTerminalRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 80: _t->onSidePaneCreateNewFolderRequested((*reinterpret_cast< const Fm::FilePath(*)>(_a[1]))); break;
        case 81: _t->onSidePaneModeChanged((*reinterpret_cast< Fm::SidePane::Mode(*)>(_a[1]))); break;
        case 82: _t->on_actionSidePane_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 83: _t->onSplitterMoved((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 84: _t->onResetFocus(); break;
        case 85: _t->onBackForwardContextMenu((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 86: _t->onFolderUnmounted(); break;
        case 87: _t->tabContextMenu((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 88: _t->onTabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 89: _t->closeLeftTabs(); break;
        case 90: _t->closeRightTabs(); break;
        case 91: _t->closeOtherTabs(); break;
        case 92: _t->focusPathEntry(); break;
        case 93: _t->toggleMenuBar((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 94: _t->detachTab(); break;
        case 95: _t->onBookmarksChanged(); break;
        case 96: _t->onSettingHiddenPlace((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 76:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 77:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 78:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 79:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        case 80:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Fm::FilePath >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PCManFM::MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_PCManFM__MainWindow.data,
    qt_meta_data_PCManFM__MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PCManFM::MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PCManFM::MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PCManFM__MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PCManFM::MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 97)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 97;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 97)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 97;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
