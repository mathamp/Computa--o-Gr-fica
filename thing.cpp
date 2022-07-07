#include "thing.hpp"
#include "utils/transform2.hpp"

using Transform::Transform2;

double Thing::get_x_pos()
{
    return x_pos;
}

double Thing::get_y_pos()
{
    return y_pos;
}

double Thing::get_rot()
{
    return rot;
}

double Thing::get_x_scale()
{
    return x_scale;
}

double Thing::get_y_scale()
{
    return y_scale;
}



void Thing::translate(double dx, double dy)
{
    x_pos += dx;
    y_pos += dy;

    Transform2 t = Transform::get_translation_matrix(dx, dy);
    apply_matrix(t);
}

void Thing::scale(double sx, double sy)
{
    x_scale *= sx;
    y_scale *= sy;

    Transform2 t = Transform::get_scale_matrix(sx, sy);
    apply_matrix(t);
}

void Thing::rotate_radians(double amount)
{
    rot += amount;

    Transform2 t = Transform::get_rotation_matrix(amount);
    apply_matrix(t);
}

void Thing::rotate_degrees(double amount)
{
    rotate_radians(amount * 3.14159265358979323846 / 180.0);
}



void Thing::apply_matrix(Transform2 t)
{
    transform = transform.apply_matrix(t);
}