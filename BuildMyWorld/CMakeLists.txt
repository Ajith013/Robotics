cmake_minimum_required(VERSION 2.8 FATAL_ERROR)

find_package(gazebo REQUIRED)
include_directories(${GAZEBO_INCLUDE_DIRS})
link_directories(${GAZEBO_LIBRARY_DIRS})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GAZEBO_CXX_FLAGS}")

add_library(welcome SHARED script/welcome_message.cpp)
target_link_libraries(welcome ${GAZEBO_LIBRARIES})

add_library(push_cart SHARED script/model_push.cpp)
target_link_libraries(push_cart ${GAZEBO_LIBRARIES})

add_library(TurnOnLightPlugin SHARED script/TurnOnLightPlugin.cpp)
target_link_libraries(TurnOnLightPlugin
  ${GAZEBO_LIBRARIES}
)



