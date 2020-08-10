#ifdef __APPLE__
#include <GLUT/glut.h>
#elif _WIN32
#include <windows.h>
#include <GL/freeglut.h>
#else
#include <GL/freeglut.h>
#endif

void display() {

    /* clear window */
    glClear(GL_COLOR_BUFFER_BIT);

    /* draw scene */
    glutWireTeapot(.5);

    /* flush drawing routines to the window */
    glFlush();

}

int main(int argc, char *argv[]) {

    /* initialize GLUT, using any commandline parameters passed to the
       program */
    glutInit(&argc, argv);

    /* setup the size, position, and display mode for new windows */
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(0, 0);
    glutInitDisplayMode(GLUT_RGB);

    /* create and set up a window */
    glutCreateWindow("hello, teapot!");
    glutDisplayFunc(display);

    /* tell GLUT to wait for events */
    glutMainLoop();
}