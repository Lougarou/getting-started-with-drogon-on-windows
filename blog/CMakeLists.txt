# CMakeList.txt : CMake project for blog, include source and define
# project specific logic here.
#
#set (CMAKE_PREFIX_PATH "")


# Add source to this project's executable.
add_executable (blog "blog.cpp" "blog.h")
find_package(Drogon CONFIG REQUIRED)
target_link_libraries(blog PRIVATE Drogon::Drogon)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET blog PROPERTY CXX_STANDARD 17)
endif()

# TODO: Add tests and install targets if needed.
