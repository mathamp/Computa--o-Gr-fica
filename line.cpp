#include "line.hpp"
#include "utils/opengl.hpp"

Line::Line(double _x1, double _y1, double _x2, double _y2) : x1(_x1) , y1(_y1), x2(_x2), y2(_y2), Thing(0.0, 0.0, 0.0) { };

void Line::draw()
{
    double m = (y2 - y1) / (x2 - x1);

    for(int x = (int)x1; x <= x2; x++)
    {
        int y = (int)(y1 + m * (x - x1));
        place_pixel(x, y);
    }
}