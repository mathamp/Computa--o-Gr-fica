#pragma once

#include "utils/transform2.hpp"

class Thing
{
    protected:
        double x_pos;
        double y_pos;

        double rot;

        double x_scale;
        double y_scale;

        Transform::Transform2 transform;

    public:
        Thing(double x, double y, double _rot);

        double get_x_pos();
        double get_y_pos();

        double get_rot();

        double get_x_scale();
        double get_y_scale();

        void translate(double dx, double dy);

        void rotate_radians(double amount);
        void rotate_degrees(double amount);

        void scale(double sx, double sy);

        void apply_matrix(Transform::Transform2 t);

        virtual void draw() = 0;
};