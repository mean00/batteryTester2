
SET(SUB ${CMAKE_CURRENT_SOURCE_DIR}/TFT_eSPI)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

SET(SRCS
        ${SUB}/TFT_eSPI.cpp

)
generate_arduino_library(${libPrefix}graphics 
                            SRCS ${SRCS}
                            BOARD ${ARDUINO_DEFAULT_BOARD}
                        )
target_include_directories(${libPrefix}graphics PRIVATE ${SUB} ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(${libPrefix}graphics PRIVATE SPI_HAS_TRANSACTION ltoa=itoa)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})
