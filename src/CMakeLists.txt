cmake_minimum_required(VERSION 3.2)
project(cmv_sdk VERSION 1.0.0 LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
message(STATUS "Configuring...")

set($PATH "./" )

set($CMV_ROOT "./" )
set(CMAKE_VERBOSE_MAKEFILE ON)


set(LIBRARY_OUTPUT_DIRECTORY "./lib")
#set(CMV_DEFI_LOCATION "" )
#set(CMV_USD_LIB_LOCATION "" )
#set(NGINEX_LOCATION "" )
set($CMV_DEBUG ON)

if ($CMV_DEBUG)
	set(CMAKE_BUILD_TYPE Debug)
elseif($CMV_RELDEBINFO)
	set(CMAKE_BUILD_TYPE RelDebInfo)
endif()

set(CMAKE_PREFIX_PATH "C:/Qt/6.4.0/msvc2019_64/lib/cmake")

find_package(Qt6 REQUIRED COMPONENTS Core)
qt_standard_project_setup()


cmake_minimum_required(VERSION 3.2)
project(cmv_src)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_AUTOMOC ON)
message(STATUS "Configuring source...")

add_library(cmv_sdk SHARED )

set(PROJECT_ROOT "./")
set(HEADER_ROOT ${PROJECT_ROOT}/sdkheader)
set(SOURCE_ROOT ${PROJECT_ROOT}/sdksrc)

set(PROJECT_SOURCE
	${SOURCE_ROOT}/cmv_base.cpp 
)


set(PROJECT_HEADER
	${HEADER_ROOT}/cmv_base.h
)


include_directories("./sdkheader")

target_sources(cmv_sdk PRIVATE ${PROJECT_SOURCE} ${PROJECT_HEADER})

target_link_libraries(cmv_sdk
		PRIVATE Qt6::Core)






