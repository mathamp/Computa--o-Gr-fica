#include "thing3.hpp"
#include "utils/transform3.hpp"

using Transform::Transform3;

double Thing3::get_x_pos()
{
    return x_pos;
}

double Thing3::get_y_pos()
{
    return y_pos;
}

double Thing3::get_z_pos()
{
    return z_pos;
}

double Thing3::get_x_rot()
{
    return x_rot;
}

double Thing3::get_y_rot()
{
    return y_rot;
}

double Thing3::get_z_rot()
{
    return z_rot;
}

double Thing3::get_x_scale()
{
    return x_scale;
}

double Thing3::get_y_scale()
{
    return y_scale;
}

double Thing3::get_z_scale()
{
    return z_scale;
}


Thing3::Thing3(double x, double y, double z, double x_rot, double y_rot, double z_rot)
                : x_pos(x), y_pos(y), z_pos(z_pos), x_rot(x_rot), y_rot(y_rot), z_rot(z_rot) { }

void Thing3::translate(double dx, double dy, double dz)
{
    x_pos += dx;
    y_pos += dy;
    z_pos += dz;

    Transform3 t = Transform::get_translation_matrix(dx, dy, dz);
    apply_matrix(t);
}

void Thing3::scale(double sx, double sy, double sz)
{
    x_scale *= sx;
    y_scale *= sy;
    z_scale *= sz;

    Transform3 t = Transform::get_scale_matrix(sx, sy, sz);
    apply_matrix(t);
}

void Thing3::rotate_x_radians(double amount)
{
    x_rot += amount;

    Transform3 t = Transform::get_rotation_matrix_x(amount);
    apply_matrix(t);
}

void Thing3::rotate_x_degrees(double amount)
{
    rotate_x_radians(amount * 3.14159265358979323846 / 180.0);
}

void Thing3::rotate_y_radians(double amount)
{
    y_rot += amount;

    Transform3 t = Transform::get_rotation_matrix_y(amount);
    apply_matrix(t);
}

void Thing3::rotate_y_degrees(double amount)
{
    rotate_y_radians(amount * 3.14159265358979323846 / 180.0);
}

void Thing3::rotate_z_radians(double amount)
{
    z_rot += amount;

    Transform3 t = Transform::get_rotation_matrix_z(amount);
    apply_matrix(t);
}

void Thing3::rotate_z_degrees(double amount)
{
    rotate_z_radians(amount * 3.14159265358979323846 / 180.0);
}



void Thing3::apply_matrix(Transform3 t)
{
    transform = transform.apply_matrix(t);
}