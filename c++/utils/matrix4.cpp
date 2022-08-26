#include "matrix4.hpp"

namespace Matrix
{
    Matrix4 add(const Matrix4& a, const Matrix4& b)
    {
        Matrix4 result;
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                double sum = a.get(i, j) + b.get(i, j);
                result.set(i, j, sum);
            }
        }

        return result;
    }

    Matrix4 sub(const Matrix4& a, const Matrix4& b)
    {
        Matrix4 result;
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                double sum = a.get(i, j) - b.get(i, j);
                result.set(i, j, sum);
            }
        }

        return result;
    }

    Matrix4 mul(double a, const Matrix4& b)
    {
        Matrix4 result;

        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                double product = a * b.get(i, j);
                result.set(i, j, product);
            }
        }

        return result;
    }

    Matrix4 mul(const Matrix4& a, const Matrix4& b)
    {
        Matrix4 result;
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                double sum = 0;

                for(int k = 0; k < 3; k++)
                    sum += a.get(i, k) * b.get(k, j);

                result.set(i, j, sum);
            }
        }

        return result;
    }





    Matrix4::Matrix4() : v{{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}} {};

    Matrix4::Matrix4(double values[4][4])
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                v[i][j] = values[i][j];
            }
        }
    }

    Matrix4::Matrix4(const Matrix4& matrix)
    {
        for(int i = 0; i < 4; i++)
        {
            for(int j = 0; j < 4; j++)
            {
                v[i][j] = matrix.get(i, j);
            }
        }
    }

    double Matrix4::get(int m, int n) const 
    {
        return v[m][n];
    }

    void Matrix4::set(int m, int n, double _value)
    {
        v[m][n] = _value;
    }

    Matrix4 Matrix4::operator+(const Matrix4& other)
    {
        return add(*this, other);
    } 

    Matrix4 Matrix4::operator-(const Matrix4& other)
    {
        return sub(*this, other);
    }

    Matrix4 Matrix4::operator*(const double& other)
    {
        return mul(other, *this);
    }

    Matrix4 Matrix4::operator*(const Matrix4& other)
    {
        return mul(*this, other);
    }
}