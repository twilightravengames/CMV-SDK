
cmake_minimum_required(VERSION 3.16)
project (CMV-SDK LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
list(APPEND CMAKE_PREFIX_PATH "C:/Qt/6.4.0/msvc2019_64/lib/cmake/Qt6")
list(APPEND CMAKE_PREFIX_PATH "C:/Qt/6.4.0/msvc2019_64/include")

#set(CMAKE_OSX_ARCHITECTURES "x86_64;arm64")

find_package(Qt6 REQUIRED COMPONENTS Core)

#target_include_directories(CMV-SDK PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(./sdksrc)
add_subdirectory(./sdkheader)

add_library(CMV-SDK)
# Link against Qt 6 libraries
target_link_libraries(CMV-SDK PUBLIC CMV-TAG_HEAD CMV-TAG_SRC Qt6::Core)

# Define the target "CMV-SDKDemo"
#add_executable(CMV-SDKDemo main.cpp)




