#include <iostream>
#include "utils/opengl.hpp"
#include "world.hpp"

#define WIDTH 1280
#define HEIGHT 720

int main(int argc, char** argv)
{
    World::initWorld();
    init(&argc, argv, WIDTH, HEIGHT);

    return 0;
}