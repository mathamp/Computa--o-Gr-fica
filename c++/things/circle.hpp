#pragma once
#include "../thing2.hpp"

class Circle : public Thing2
{
    private:
        double radius;

        void draw_circle_8points(double x, double y);
    
    public:
        Circle(double x, double y, double radius);

        void draw();
};