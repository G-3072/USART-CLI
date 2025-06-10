set(TARGET_NAME USART)

add_library(${TARGET_NAME} 
    src/CUSART.cpp
)

target_link_libraries(${TARGET_NAME} PRIVATE
    
)

target_include_directories(${TARGET_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/inc>
    # $<INSTALL_INTERFACE:>
)

