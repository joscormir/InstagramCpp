cmake_minimum_required(VERSION 2.8.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC")

add_subdirectory(results)

set(INSTAGRAM_SOURCES 
	InstagramClient.cpp
	InstagramParser.cpp
)

add_library(instagramcpp SHARED ${INSTAGRAM_SOURCES}
    $<TARGET_OBJECTS:results>
)
target_link_libraries(instagramcpp httpcpp jsoncpp)
