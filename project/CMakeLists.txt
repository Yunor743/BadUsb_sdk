
# ESP32 needs some special compilers. Set them here
SET(CMAKE_C_COMPILER "${ARDUINO_SDK_PATH}/hardware/tools/avr/bin/avr-gcc")
SET(CMAKE_CXX_COMPILER "${ARDUINO_SDK_PATH}/hardware/tools/avr/bin/avr-g++")
SET(CMAKE_AR "${ARDUINO_SDK_PATH}/hardware/tools/avr/bin/avr-gcc-ar")
SET(CMAKE_RANLIB "${ARDUINO_SDK_PATH}/hardware/tools/avr/bin/avr-gcc-ranlib")

set(PROJECT_NAME badusb_sdk)
project(${PROJECT_NAME})

set(sources 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/helloworld.cpp
    )

set(${PROJECT_NAME}_BOARD uno)
set(${PROJECT_NAME}_SRCS ${sources})
# Define the port for uploading code to the Arduino
set(${PROJECT_NAME}_PORT COM6)
set(${PROJECT_NAME}_CPU 16MHzatmega328)

# Command to generate code arduino firmware (.hex file)
generate_arduino_firmware(${PROJECT_NAME})

