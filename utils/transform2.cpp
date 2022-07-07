#include "transform2.hpp"
#include <cmath>

using Matrix::Matrix3;

namespace Transform
{
    Transform2 get_translation_matrix(double dx, double dy)
    {
        double matrix[3][3] = {{1, 0, dx},
                               {0, 1, dy},
                               {0, 0, 1 }};

        return Transform2(Matrix3(matrix));
    }

    Transform2 get_scale_matrix(double sx, double sy)
    {
        double matrix[3][3] = {{sx, 0, 0},
                               {0, sy, 0},
                               {0, 0,  1}};

        return Transform2(Matrix3(matrix));
    }

    Transform2 get_rotation_matrix(double amount)
    {
        double matrix[3][3] = {{cos(amount), -sin(amount), 0},
                               {sin(amount),  cos(amount), 0},
                               {0          ,            0, 1}};

        return Transform2(Matrix3(matrix));
    }





    Transform2 Transform2::apply_matrix(Transform2 t)
    {
        Matrix3 result = t.m * m;

        return Transform2(Matrix3(result));
    };

    

    Transform2::Transform2()
    {
        double matrix[3][3] = {{0, 0, 0},
                               {0, 0, 0},
                               {0, 0, 1}};

        m = Matrix3(matrix);
    }

    Transform2::Transform2(const Matrix::Matrix3& _m)
    {
        m = Matrix3(_m);
    }
}