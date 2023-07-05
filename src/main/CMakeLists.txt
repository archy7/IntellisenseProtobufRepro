add_executable(IPB main.cpp)

target_link_libraries(IPB PRIVATE
	SubProject1
)

install(TARGETS IPB)