cmake_minimum_required(VERSION 2.8.12)


SET (PNAME, KnowledgeBase)
project(KnowledgeBase)

#set (CMAKE_CXX_FLAGS -std=c++11 )
#set (CMAKE_CXX_BUILD_DEBUG -Wall -g )

set (ROOT /home/gskaian)
set(PROOT ${ROOT}/myproject)

include_directories(
  ${PROOT}/include
  /usr/include
)

set (UTEST_SRC_FILES
  ./uTests/kb.t.cpp
)

add_executable(kbUtest ${UTEST_SRC_FILES})
target_compile_options(kbUtest PUBLIC -std=c++11 -Wall -g -O3)
target_link_libraries(kbUtest gtest pthread )

