#pragma once

class Thing
{
    private:
        double x_pos;
        double y_pos;

        double rot;

        double x_scale;
        double y_scale;

        double matrix[3][3];

    public:
        Thing(double _x, double _y, double _rot);

        double get_x_pos();
        double get_y_pos();

        double get_rot();

        double get_x_scale();
        double get_y_scale();

        void translate(double _dx, double _dy);
        void translate_matrix(double _translation_matrix[3][3]);

        void rotate(double _amount);
        void rotate_matrix(double _rotation_matrix[3][3]);

        void scale(double _dx, double _dy);
        void scale_matrix(double _scale_matrix[3][3]);

        void apply_matrix(double _transformation_matrix[3][3]);

        virtual void draw();
};