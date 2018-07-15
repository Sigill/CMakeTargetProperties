add_library(libh INTERFACE)
target_include_directories(libh INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_definitions(libh INTERFACE H)
