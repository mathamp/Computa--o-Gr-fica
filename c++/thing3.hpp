#pragma once

#include "utils/transform3.hpp"

class Thing3
{
    protected:
        double x_pos;
        double y_pos;
        double z_pos;

        double x_rot;
        double y_rot;
        double z_rot;

        double x_scale;
        double y_scale;
        double z_scale;

        Transform::Transform3 transform;

    public:
        Thing3(double x, double y, double z, double x_rot, double y_rot, double z_rot);

        double get_x_pos();
        double get_y_pos();
        double get_z_pos();

        double get_x_rot();
        double get_y_rot();
        double get_z_rot();

        double get_x_scale();
        double get_y_scale();
        double get_z_scale();

        void translate(double dx, double dy, double dz);

        void rotate_x_radians(double amount);
        void rotate_x_degrees(double amount);
        void rotate_y_radians(double amount);
        void rotate_y_degrees(double amount);
        void rotate_z_radians(double amount);
        void rotate_z_degrees(double amount);

        void scale(double sx, double sy, double sz);

        void apply_matrix(Transform::Transform3 t);

        virtual void draw() = 0;
};