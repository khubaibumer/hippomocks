cmake_minimum_required(VERSION 3.0)
enable_testing()

if (NOT MSVC)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17")
endif()
add_subdirectory(HippoMocks)

install(FILES ${PROJECT_SOURCE_DIR}/HippoMocks/hippomocks.h
        DESTINATION include/)
