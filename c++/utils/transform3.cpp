#include "transform3.hpp"
#include <cmath>

using Matrix::Matrix4;

namespace Transform
{
    Transform3 get_translation_matrix(double dx, double dy, double dz)
    {
        double matrix[4][4] = {{1, 0, 0, dx},
                               {0, 1, 0, dy},
                               {0, 0, 1, dz},
                               {0, 0, 0, 1 }};

        return Transform3(Matrix4(matrix));
    }

    Transform3 get_scale_matrix(double sx, double sy, double sz)
    {
        double matrix[4][4] = {{sx, 0, 0, 0},
                               {0, sy, 0, 0},
                               {0, 0, sz, 0},
                               {0, 0, 0 , 1}};

        return Transform3(Matrix4(matrix));
    }

    Transform3 get_rotation_matrix_z(double amount)
    {
        double matrix[4][4] = {{cos(amount), -sin(amount), 0, 0},
                               {sin(amount),  cos(amount), 0, 0},
                               {0          ,  0          , 1, 0},
                               {0          ,  0          , 0, 1}};

        return Transform3(Matrix4(matrix));
    }

    Transform3 get_rotation_matrix_y(double amount)
    {
        double matrix[4][4] = {{ cos(amount), 0, sin(amount), 0},
                               { 0          , 1, 0          , 0},
                               {-sin(amount), 0, cos(amount), 0},
                               { 0          , 0, 0          , 1}};

        return Transform3(Matrix4(matrix));
    }

    Transform3 get_rotation_matrix_x(double amount)
    {
        double matrix[4][4] = {{ 1, 0          ,  0          , 0},
                               { 0, cos(amount), -sin(amount), 0},
                               { 0, sin(amount),  cos(amount), 0},
                               { 0, 0          ,  0          , 1}};

        return Transform3(Matrix4(matrix));
    }





    Transform3 Transform3::apply_matrix(Transform3 t)
    {
        Matrix4 result = t.m * m;

        return Transform3(Matrix4(result));
    };

    

    Transform3::Transform3()
    {
        double matrix[4][4] = {{0, 0, 0, 0},
                               {0, 0, 0, 0},
                               {0, 0, 0, 0},
                               {0, 0, 0, 1}};

        m = Matrix4(matrix);
    }

    Transform3::Transform3(const Matrix::Matrix4& _m)
    {
        m = Matrix4(_m);
    }
}