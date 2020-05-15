cmake_minimum_required(VERSION 3.15)
project(milesmetermvp)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
add_executable(milesmetermvp main.cpp Data.cpp Data.h Fenetre.cpp Fenetre.h Presenter.cpp Presenter.h Settings.cpp Settings.h)

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)
SET(QT_USE_QTNETWORK true)
target_link_libraries(milesmetermvp Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Network)