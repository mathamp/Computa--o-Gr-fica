#pragma once

#include "matrix4.hpp"

namespace Transform
{
    class Transform3
    {
        private:
            Matrix::Matrix4 m;

        public:
            Transform3();
            Transform3(const Matrix::Matrix4& _m);

            Transform3 apply_matrix(Transform3 t);
    };



    Transform3 get_translation_matrix(double dx, double dy, double dz);
    Transform3 get_rotation_matrix_x(double amount);
    Transform3 get_rotation_matrix_y(double amount);
    Transform3 get_rotation_matrix_z(double amount);
    Transform3 get_scale_matrix(double sx, double sy, double sz);
}