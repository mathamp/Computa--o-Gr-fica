#include "thing.hpp"
#include "utils/opengl.hpp"
#include "things/line.hpp"

#include <vector>
#include <memory>


namespace World
{
    std::vector<std::unique_ptr<Thing>> THINGS;

    void initWorld()
    {
        THINGS.emplace_back(new Line(0, 0, 50, 720));
        THINGS.emplace_back(new Line(0, 0, 1280, 720));
        THINGS.emplace_back(new Line(250, 250, 1000, 250));
    }

    void draw_things()
    {
        for(int i = 0; i < THINGS.size(); i++)
        {
            THINGS[i]->draw();
        }
    }
}