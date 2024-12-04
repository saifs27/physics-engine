#pragma once

#include <algorithm>
#include <array>
#include <concepts>
#include <numeric>

namespace physics {

class Vec3 {
   public:
    double x;
    double y;
    double z;

    Vec3(double x, double y, double z) : x(x), y(y), z(z) {};

    Vec3 operator+(Vec3& v) const { return Vec3(x + v.x, y + v.y, z + v.z); };
    Vec3 operator-(Vec3& v) const { return Vec3(x - v.x, y - v.y, z - v.z); };
    Vec3 operator*(float s) const { return Vec3(x * s, y * s, z * s); };
};

class Matrix3 {
   private:
    std::array<float, 9> m_matrix = {};

   public:
    Matrix3(std::array<float, 9> arr) {
        std::copy(std::begin(arr), std::end(arr), std::begin(m_matrix));
    };
    float at(int row, int column) const { return m_matrix[row * 3 + column]; }

    Matrix3 operator+(Matrix3& m) const {
        std::array<float, 9> result = {};
        for (int i = 0; i < 9; i++) {
            result[i] = m_matrix[i] + m.m_matrix[i];
        }
        return Matrix3(result);
    };

    Matrix3 operator-(Matrix3& m) const {
        std::array<float, 9> result = {};
        for (int i = 0; i < 9; i++) {
            result[i] = m_matrix[i] - m.m_matrix[i];
        }
        return Matrix3(result);
    };

    Vec3 operator*(Vec3& v) const {
        float result[3] = {};
        for (int i = 0; i < 3; i++) {
            result[i] = at(i, 0) + at(i, 1) + at(i, 2);
        }
        return Vec3(result[0], result[1], result[2]);
    }
};

}  // namespace physics
