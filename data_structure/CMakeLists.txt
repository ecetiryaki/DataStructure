cmake_minimum_required(VERSION 2.8.3)
project(data_structure)

# add_definitions(-std=c++11)

find_package(catkin REQUIRED
  COMPONENTS
)

catkin_package(
  INCLUDE_DIRS
    include
  LIBRARIES
  CATKIN_DEPENDS
)

include_directories(
  include
  ${catkin_INCLUDE_DIRS}
)
link_directories(
)

add_executable(linkList1 src/linkList1.c )
target_link_libraries(linkList1)

add_executable(linkList2 src/linkList2.c )
target_link_libraries(linkList2)
