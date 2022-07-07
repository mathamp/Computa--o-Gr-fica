#include "matrix3.hpp"

namespace Matrix
{
    Matrix3 add(const Matrix3& a, const Matrix3& b)
    {
        Matrix3 result;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                double sum = a.get(i, j) + b.get(i, j);
                result.set(i, j, sum);
            }
        }

        return result;
    }

    Matrix3 sub(const Matrix3& a, const Matrix3& b)
    {
        Matrix3 result;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                double sum = a.get(i, j) - b.get(i, j);
                result.set(i, j, sum);
            }
        }

        return result;
    }

    Matrix3 mul(double a, const Matrix3& b)
    {
        Matrix3 result;

        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                double product = a * b.get(i, j);
                result.set(i, j, product);
            }
        }

        return result;
    }

    Matrix3 mul(const Matrix3& a, const Matrix3& b)
    {
        Matrix3 result;
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                double sum = 0;

                for(int k = 0; k < 3; k++)
                    sum += a.get(i, k) * b.get(k, j);

                result.set(i, j, sum);
            }
        }

        return result;
    }



    Matrix3::Matrix3() : m{{0, 0, 0}, {0, 0, 0}, {0, 0, 0}} {};

    Matrix3::Matrix3(double values[3][3])
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                m[i][j] = values[i][j];
            }
        }
    }

    Matrix3::Matrix3(const Matrix3& matrix)
    {
        for(int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                m[i][j] = matrix.get(i, j);
            }
        }
    }

    double Matrix3::get(int _m, int _n) const 
    {
        return m[_m][_n];
    }

    void Matrix3::set(int _m, int _n, double _value)
    {
        m[_m][_n] = _value;
    }

    Matrix3 Matrix3::operator+(const Matrix3& other)
    {
        return add(*this, other);
    } 

    Matrix3 Matrix3::operator-(const Matrix3& other)
    {
        return sub(*this, other);
    }

    Matrix3 Matrix3::operator*(const double& other)
    {
        return mul(other, *this);
    }

    Matrix3 Matrix3::operator*(const Matrix3& other)
    {
        return mul(*this, other);
    }
}