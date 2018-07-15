add_library(libb SHARED libb.cxx)
target_include_directories(libb PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(libb PRIVATE B)
target_link_libraries(libb PRIVATE liba)
