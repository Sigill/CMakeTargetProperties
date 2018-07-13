add_library(libc STATIC libc.cxx)
target_include_directories(libc PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(libc PUBLIC C)
