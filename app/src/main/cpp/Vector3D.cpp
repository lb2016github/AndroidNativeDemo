//
// Created by luobo on 2019/1/24.
//

#include "Vector3D.h"

Vector3D::Vector3D(const Vector3D &vec) {
    x = vec.x;
    y = vec.y;
    z = vec.z;
}

Vector3D::Vector3D(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

Vector3D::Vector3D(): x(0), y(0), z(0) {}

Vector3D::~Vector3D() {}

Vector3D &Vector3D::operator+(const Vector3D &vec) {
    if ($vec == this){
        return *this;
    }
    x += vec.x;
    y += vec.y;
    z += vec.z;
    return *this;
}
