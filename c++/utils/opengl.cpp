#include <GL/glut.h>
#include <GL/gl.h>

#include "../world.hpp"

#include <iostream>

void reshape_callback(int, int);
void display_callback();
void keyboard_callback(u_char, int, int);
void place_pixel(unsigned int, unsigned int, float, float, float);
void place_pixel(unsigned int, unsigned int);

void init(int* argc, char** argv, unsigned int width, unsigned int height)
{
    glutInit(argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH) - width) / 2,
                           (glutGet(GLUT_SCREEN_HEIGHT) - height) / 2);
    glutInitWindowSize(width, height);
    glutCreateWindow("OpenGL");

    glutReshapeFunc(reshape_callback);
    glutDisplayFunc(display_callback);
    glutKeyboardFunc(keyboard_callback);

    glutMainLoop();
}

void reshape_callback(int width, int height)
{
    glViewport(0, 0, width, height);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0.0, width, 0.0, height, -1.0, 1.0);
    glMatrixMode(GL_MODELVIEW);
}

void display_callback()
{
    glClear(GL_COLOR_BUFFER_BIT);
            
    World::draw_things();

    glutSwapBuffers();
}

void keyboard_callback(unsigned char key, int mouse_x, int mouse_y)
{
    switch (key)
    {
        // Escape
        case 27:
            exit(0);
            break;
        
        default:
            break;
    }
}

void place_pixel(unsigned int x, unsigned int y, float r, float g, float b)
{
    glBegin(GL_POINTS);
        glColor3f(r, g, b);
        glVertex2i(x, y);
    glEnd();
}

void place_pixel(unsigned int x, unsigned int y)
{
    place_pixel(x, y, 1.0, 1.0, 1.0);
}