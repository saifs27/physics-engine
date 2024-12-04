#pragma once
#include <array>
#include <vector>

#include "math.hpp"
namespace physics {

struct Mesh {
    std::vector<Vec3> vertices;
    std::vector<Vec3> triangles;
};

struct RigidBody {
    Mesh& mesh;
    float mass;
    float inverseMass;

    Vec3 centerOfMass;

    Vec3 position;
    Vec3 linearVelocity;
    Vec3 angularVelocity;
 
    Matrix3 inertiaTensor;
    Matrix3 inverseInertiaTensor;

    float density;

    void applyForce(const Vec3& force, const Vec3& dir);

    Vec3 linear_momentum();
    // Vec3 center_of_mass();
};

}  // namespace physics
