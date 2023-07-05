add_library(SubProject1 STATIC SubProject1/messageUser.cpp)

target_include_directories(SubProject1 PUBLIC ".")

target_link_libraries(SubProject1 PUBLIC messages)