#include <iostream>

#include "../utils/matrix3.hpp"

using Matrix::Matrix3;

int main()
{
    double normal[3][3] = {{0, 1, 2},
                           {2, 3, 4},
                           {5, 6, 7}};

    double inverted[3][3] = {{9, 8, 7},
                             {6, 5, 4},
                             {3, 2, 1}};

    Matrix3 a(normal);
    Matrix3 b(inverted);

    std::cout << "A + B:" << std::endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << (a + b).get(i, j) << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;



    std::cout << "A - B:" << std::endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << (a - b).get(i, j) << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;



    std::cout << "A * B:" << std::endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << (a * b).get(i, j) << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;



    std::cout << "3 * B:" << std::endl;

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << (b * 3).get(i, j) << " ";
        }

        std::cout << std::endl;
    }

    std::cout << std::endl;
}