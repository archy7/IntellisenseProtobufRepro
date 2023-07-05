# CMakeList.txt : CMake project for IntellisenseProtobuf, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (IntellisenseProtobuf "IntellisenseProtobuf.cpp" "IntellisenseProtobuf.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET IntellisenseProtobuf PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
