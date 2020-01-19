cmake_minimum_required(VERSION 2.8)

#set(CMAKE_C_COMPILER   arm-linux-gcc)
#set(CMAKE_CXX_COMPILER arm-linux-g++)


#include_directories(./src)
#aux_source_directory(src SRC)
#add_library(libtest ${SRC})



include_directories(.)
aux_source_directory(. SRCS)

add_executable(test ${SRCS})

#target_link_libraries(test libtest m rt pthread)