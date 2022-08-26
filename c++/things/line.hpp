#pragma once
#include "../thing2.hpp"

class Line : public Thing2
{
    private:
        double x1, x2;
        double y1, y2;

    public:
        Line(double _x1, double _y1, double _x2, double _y2);

        void rotate_radians(double amount);
        void draw();
};