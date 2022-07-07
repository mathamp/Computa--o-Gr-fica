#pragma once

class Thing
{
    private:
        double m_x_pos;
        double m_y_pos;

        double m_rot;

        double m_x_scale;
        double m_y_scale;

        double matrix[3][3];

    public:
        Thing(double x, double y, double rot);

        double get_x_pos();
        double get_y_pos();

        double get_rot();

        double get_x_scale();
        double get_y_scale();

        void translate(double dx, double dy);
        void translate_matrix(double translation_matrix[3][3]);

        void rotate(double amount);
        void rotate_matrix(double rotation_matrix[3][3]);

        void scale(double dx, double dy);
        void scale_matrix(double scale_matrix[3][3]);

        void apply_matrix(double transformation_matrix[3][3]);

        virtual void draw();
};