include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${Protobuf_INCLUDE_DIRS})

protobuf_generate_cpp(PROTO_SRCS PROTO_HDRS 
			   messages/dummy1.proto 
               messages/dummy2.proto)

add_library(messages STATIC ${PROTO_SRCS} ${PROTO_HDRS})

target_include_directories(messages PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/..) # The /.. at the end is intentional and not an oversight.

target_link_libraries(messages ${Protobuf_LIBRARIES})