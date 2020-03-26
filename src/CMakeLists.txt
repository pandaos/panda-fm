set(pandafm_SRCS
    application.cpp
    pcmanfm.cpp
    mainwindow.cpp
    tabpage.cpp
    tabbar.cpp
    statusbar.cpp
    view.cpp
    launcher.cpp
    preferencesdialog.cpp
    xdgdir.cpp
    desktoppreferencesdialog.cpp
    desktopwindow.cpp
    autorundialog.cpp
    connectserverdialog.cpp
    settings.cpp
    bulkrename.cpp
    desktopentrydialog.cpp
)

qt5_add_dbus_adaptor(pandafm_DBUS_SRCS
    org.pcmanfm.Application.xml
    application.h
    PCManFM::Application
    applicationadaptor
    ApplicationAdaptor
)

# qt5_add_dbus_adaptor() already generated the moc files. It also marked the
# files with SKIP_AUTOMOC but we still need to mark them witk SKIP_AUTOGEN.
# TODO: Check if this behaviour is a CMake bug.
set_source_files_properties(${pandafm_DBUS_SRCS} PROPERTIES SKIP_AUTOGEN ON)

set(pandafm_UIS
    main-win.ui
    about.ui
    shortcuts.ui
    preferences.ui
    desktop-preferences.ui
    desktop-folder.ui
    autorun.ui
    connect.ui
    bulk-rename.ui
    desktopentrydialog.ui
)

# add translation for pandafm
lxqt_translate_ts(QM_FILES
    UPDATE_TRANSLATIONS ${UPDATE_TRANSLATIONS}
    SOURCES ${pandafm_SRCS} ${pandafm_UIS}
    INSTALL_DIR "${CMAKE_INSTALL_DATADIR}/${PROJECT_NAME}/translations"
)

add_executable(pandafm
    ${pandafm_SRCS}
    ${pandafm_DBUS_SRCS}
    ${pandafm_UIS}
    ${QM_FILES}
)

target_compile_definitions(pandafm
    PRIVATE
        PCMANFM_DATA_DIR="${CMAKE_INSTALL_PREFIX}/share/pandafm"
        PCMANFM_QT_VERSION="${PCMANFM_QT_VERSION}"
        LIBFM_DATA_DIR="${PKG_FM_PREFIX}/share/libfm"
)

target_include_directories(pandafm
    PRIVATE
        "${Qt5Gui_PRIVATE_INCLUDE_DIRS}"
)

target_link_libraries(pandafm
    Qt5::X11Extras
    Qt5::Widgets
    Qt5::DBus
    panda-fm
)

install(TARGETS pandafm RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR})

# install a desktop entry file for pandafm and desktop preferences
install(FILES ${DESKTOP_FILES} DESTINATION "${CMAKE_INSTALL_DATADIR}/applications"
)

# prevent the generated files from being deleted during make clean
set_directory_properties(PROPERTIES CLEAN_NO_CUSTOM true)
