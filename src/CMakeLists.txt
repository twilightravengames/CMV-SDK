
project(CMV_SDK)

message(STATUS "COnfiguring...")
set(QT6_LOCATION "../qt6")
set($CMV_DEBUG ON)

if ($CMV_DEBUG)
	set(CMAKE_BUILD_TYPE Debug)
elseif($CMV_RELDEBINFO)
	set(CMAKE_BUILD_TYPE RelDebInfo)
endif()

add_subdirectory(sdkheader)
add_subdirectory(sdksrc)

add_library(${QT6_LOCATION})

set(TARGET cmv_sdk)
set(SRC
	cmv_base.cpp
)


add_library(${TARGET} SHARED ${SRC})

