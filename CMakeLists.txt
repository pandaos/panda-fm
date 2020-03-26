cmake_minimum_required(VERSION 3.1.0 FATAL_ERROR)
project(pandafm)

# PcmanFm-Qt Version
set(PCMANFM_QT_VERSION_MAJOR 0)
set(PCMANFM_QT_VERSION_MINOR 14)
set(PCMANFM_QT_VERSION_PATCH 1)

set(PCMANFM_QT_VERSION ${PCMANFM_QT_VERSION_MAJOR}.${PCMANFM_QT_VERSION_MINOR}.${PCMANFM_QT_VERSION_PATCH})

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

find_package(Qt5DBus REQUIRED)
find_package(Qt5LinguistTools REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5X11Extras REQUIRED)
find_package(GLIB REQUIRED COMPONENTS gio gio-unix gobject gthread)
find_package(panda-fm REQUIRED)
find_package(lxqt-build-tools REQUIRED)

message(STATUS "Building ${PROJECT_NAME} with Qt ${Qt5Core_VERSION}")

option(UPDATE_TRANSLATIONS "Update source translation translations/*.ts files" OFF)
include(GNUInstallDirs)
include(LXQtPreventInSourceBuilds)
include(LXQtConfigVars)
include(LXQtTranslateTs)
include(LXQtTranslateDesktop)
include(LXQtCompilerSettings NO_POLICY_SCOPE)

set(CMAKE_AUTOMOC TRUE)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(src)
