#include "line.hpp"
#include "../utils/opengl.hpp"
#include "../utils/trig.hpp"
#include <cmath>

Line::Line(double _x1, double _y1, double _x2, double _y2) : x1(_x1) , y1(_y1), x2(_x2), y2(_y2), Thing(0.0, 0.0, 0.0) { };

void draw_first_octant(int x1, int y1, int x2, int y2)
{
    int dx = x2 - x1;
    int dy = y2 - y1;

    int d = 2 * dy - dx;

    int inc_e = 2 * dy;
    int inc_ne = 2 * (dy - dx);

    for(int x = x1, y = y1; x <= x2; x++)
    {
        place_pixel(x, y);

        if(d <= 0)
        {
            d += inc_e;
        }
        else
        {
            d += inc_ne;
            y++;
        }
    }
}

void Line::draw()
{
    draw_first_octant(x1, y1, x2, y2);
}