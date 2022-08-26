#include "circle.hpp"
#include "../utils/opengl.hpp"

#include <iostream>

Circle::Circle(double x, double y, double radius) : radius(radius), Thing2(x, y, 0) { }

void Circle::draw_circle_8points(double x, double y)
{
    place_pixel(+x + x_pos, +y + y_pos);    // Primeiro Octante
    place_pixel(+y + x_pos, +x + y_pos);    // Segundo Octante
    place_pixel(-y + x_pos, +x + y_pos);    // Terceiro Octante
    place_pixel(-x + x_pos, +y + y_pos);    // Quarto Octante
    place_pixel(-x + x_pos, -y + y_pos);    // Quinto Octante
    place_pixel(-y + x_pos, -x + y_pos);    // Sexto Octante
    place_pixel(+y + x_pos, -x + y_pos);    // Sétimo Octante
    place_pixel(+x + x_pos, -y + y_pos);    // Oitavo Octante
}

void Circle::draw()
{
    double x = 0;
    double y = radius;
    double d = 5.0 / 4.0 - radius;

    draw_circle_8points(x, y);

    for (; y > x; x++)
    {
        if (d < 0)
        {
            d = d + 2 * x + 3;
        }
        else
        {
            d = d + 2 * (x - y) + 5;
            y--;
        }

        draw_circle_8points(x, y);
    }
}