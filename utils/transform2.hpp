#pragma once

#include "matrix3.hpp"

namespace Transform
{
    class Transform2
    {
        private:
            Matrix::Matrix3 m;

        public:
            Transform2();
            Transform2(const Matrix::Matrix3& m);
            Transform2(const Transform2& t);

            Transform2 apply_matrix(Transform2 t);
    };



    Transform2 get_translation_matrix(double dx, double dy);
    Transform2 get_rotation_matrix(double amount);
    Transform2 get_scale_matrix(double sx, double sy);
}
