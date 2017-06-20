cmake_minimum_required(VERSION 2.6)
project(rolenator)
find_package(Qt4 REQUIRED)

include_directories(${QT_INCLUDES} ${CMAKE_CURRENT_BINARY_DIR})

set(Rolenator_SRCS Rolenator.cpp LoginHandler.cpp RegisterHandler.cpp EventEditHandler.cpp InviteHandler.cpp ViewEventHandler.cpp MessageHandler.cpp MainPageHandler.cpp DAO.cpp User.cpp UserDAO.cpp EventDAO.cpp DAORegistry.cpp main.cpp)

qt4_automoc(${Rolenator_SRCS} LoginHandler.hpp RegisterHandler.hpp EventEditHandler.hpp InviteHandler.hpp ViewEventHandler.hpp MessageHandler.hpp MainPageHandler.hpp)
add_executable(rolenator ${Rolenator_SRCS})
target_link_libraries(rolenator ${QT_QTCORE_LIBRARY} ${QT_QTGUI_LIBRARY} ${QT_QTSQL_LIBRARY})

install(TARGETS rolenator RUNTIME DESTINATION bin)
