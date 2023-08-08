cmake_minimum_required(VERSION 3.13.4)
project(rkdeveloptool CXX)

# Set LIBUSB_INCLUDE_DIRS and LIBUSB_LIBRARIES manually.

file(GLOB SOURCE_FILES ${CMAKE_CURRENT_SOURCE_DIR}/win32/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.h ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)

include_directories(rkdeveloptool PRIVATE ${LIBUSB_INCLUDE_DIRS})

add_executable(rkdeveloptool ${SOURCE_FILES})

target_link_libraries(rkdeveloptool PRIVATE ${LIBUSB_LIBRARIES})

