cmake_minimum_required(VERSION 3.7)
project(Are-You-European)

set(CMAKE_CXX_STANDARD 14)

#set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_BUILD_TYPE "Release")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

#打开Qt的MOC功能和UI文件处理功能
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

#set(CMAKE_EXE_LINKER_FLAGS ${CMAKE_EXE_LINKER_FLAGS} "-Wl,-Bstatic -lstdc++ -lgcc -Wl,-Bdynamic -Wl,--as-needed")

#set(CMAKE_RUNTIME_OUTPUT_DIRECnTORY ${CMAKE_CURRENT_SOURCE_DIR} bin)

set(CMAKE_PREFIX_PATH C:\\lib\\Qt\\Qt5.9.2\\5.9.2\\mingw53_32)

find_package(Qt5Widgets)

#.ui
set(UI_FILES src/MainWindow.ui)
#.rc
set(RC_FILES)
#qrc
#set(QRC_FILES src/resource.qrc)

qt5_add_resources(RESOURCE_ADDED ${QRC_FILES})


set(SOURCE_FILES src/Main.cpp src/MainWindow.cpp src/MainWindow.h src/LotteryList.cpp src/LotteryList.h)


#add_executable(Are-You-European WIN32 ${SOURCE_FILES} ${UI_FILES} ${RC_FILES} ${RESOURCE_ADDED})
add_executable(Are-You-European ${SOURCE_FILES} ${UI_FILES} ${RC_FILES} ${RESOURCE_ADDED})

target_link_libraries(Are-You-European Qt5::Widgets)
