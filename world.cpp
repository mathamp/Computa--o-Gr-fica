#include "thing.hpp"
#include "utils/opengl.hpp"
#include "things/line.hpp"
#include "utils/trig.hpp"

#include <vector>
#include <memory>
#include <cmath>
#include <iostream>


namespace World
{
    std::vector<std::unique_ptr<Thing>> THINGS;

    double radius = 200;

    void initWorld()
    {
        for(double i = 0.0; i < deg2rad(360.0); i += deg2rad(1.0))
        {
            double x1 = 250;
            double y1 = 250;

            double x2 = x1 + radius * cos(i);
            double y2 = y1 + radius * sin(i);

            THINGS.emplace_back(new Line(x1, y1, x2, y2));
        }
    }

    void draw_things()
    {
        for(int i = 0; i < THINGS.size(); i++)
        {
            THINGS[i]->draw();
        }
    }
}