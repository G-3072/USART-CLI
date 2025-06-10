add_executable(${PROJECT_NAME} 
    src/main.cpp
)

find_package(Curses REQUIRED)

target_link_libraries(${PROJECT_NAME} PRIVATE
    ${CURSES_LIBRARY}
    USART
)

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
    $<BUILD_INTERFACE:${CURSES_INCLUDE_DIRS}>
    # $<INSTALL_INTERFACE:>
)

