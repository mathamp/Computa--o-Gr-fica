#include "thing.hpp"
#include "utils/opengl.hpp"
#include "line.hpp"

#include <vector>
#include <memory>


namespace World
{
    std::vector<std::unique_ptr<Thing>> THINGS;

    void initWorld()
    {
        THINGS.emplace_back(new Line(0, 0, 20, 720));
    }

    void draw_things()
    {
        for(int i = 0; i < THINGS.size(); i++)
        {
            THINGS[i]->draw();
        }
    }
}