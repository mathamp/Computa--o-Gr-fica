#include "trig.hpp"
#include <cmath>

double deg2rad(double angle)
{
    return angle * PI / 180.0;
}

double rad2deg(double angle)
{
    return angle * 180.0 / PI;
}