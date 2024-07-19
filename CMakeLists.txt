cmake_minimum_required(VERSION 3.28)
project(Whispers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "/User/waterbucket/Qt/6.7.0/macos/lib/cmake")

set(CMAKE_INSTALL_RPATH "/User/waterbucket/Qt/6.7.0/macos/lib/")

set(CMAKE_INSTALL_RPATH_USE_LINK_PATH TRUE)

SET(CMAKE_SKIP_BUILD_RPATH FALSE)

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        REQUIRED)

add_executable(Whispers main.cpp
        Models/Student/student.cpp
        Models/Student/student.h
        utils/FactorTypes.h
        Models/Classroom/classroom.cpp
        Models/Classroom/classroom.h
        utils/Const.h
        utils/Pos.h
        Windows/MainWindow/mainwindow.cpp
        Windows/MainWindow/mainwindow.h
        Windows/MainWindow/mainwindow.ui
        Windows/GridWidget/gridwidget.cpp
        Windows/GridWidget/gridwidget.h
        Windows/GridWidget/gridwidget.ui
        Windows/AuthDialog/authdialog.cpp
        Windows/AuthDialog/authdialog.h
        Windows/AuthDialog/authdialog.ui
        Windows/swapDialog/swapdialog.cpp
        Windows/swapDialog/swapdialog.h
        Windows/swapDialog/swapdialog.ui
)
target_link_libraries(Whispers
        Qt::Core
        Qt::Gui
        Qt::Widgets
)

add_custom_command(TARGET Whispers POST_BUILD
    COMMAND install_name_tool -add_rpath ~/Qt/6.7.0/macos/lib/ $<TARGET_FILE:Whispers>
)