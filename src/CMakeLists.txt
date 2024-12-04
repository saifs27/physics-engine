# CMakeList.txt : CMake project for fluid-sim, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (physics-engine "main.cpp" "physics_engine.h" "particle.cpp" "rigid_body.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET physics-engine PROPERTY CXX_STANDARD 20)
endif()

target_link_libraries(physics-engine PRIVATE raylib)