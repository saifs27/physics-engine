#pragma once
#include <array>
#include <vector>

namespace physics {

struct Vec3 {
    float x;
    float y;
    float z;
};

struct Mesh {
    std::vector<Vec3> vertices;
    std::vector<Vec3> triangles;
};


struct RigidBody {
    Mesh& mesh;
    Vec3 center_of_mass ;
    Vec3 velocity; 
    float density;

    float mass();
    Vec3 linear_momentum(); 
    //Vec3 center_of_mass();
}; 

} // namespace physics