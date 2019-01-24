//
// Created by luobo on 2019/1/24.
//

#ifndef ANDROIDNATIVEDEMO_VECTOR3D_H
#define ANDROIDNATIVEDEMO_VECTOR3D_H


class Vector3D {
public:
    Vector3D();
    Vector3D(float _x, float _y, float _z);
    ~Vector3D();
    Vector3D(const Vector3D& vec);

    Vector3D&operator +(const Vector3D& vec);

public:
    float x, y, z;
};


#endif //ANDROIDNATIVEDEMO_VECTOR3D_H
