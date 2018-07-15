add_library(liba SHARED liba.cxx)
target_include_directories(liba PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(liba PRIVATE A)
