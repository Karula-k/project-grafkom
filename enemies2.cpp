#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

float x; float y;

void enemies() {

    // start of bagian atas

        //kotak atas
        glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(1, 5);
            glVertex2f(1, 6);
            glVertex2f(2, 5);
            glVertex2f(2, 6);
            glVertex2f(3, 5);
            glVertex2f(3, 6);
            glVertex2f(4, 5);
            glVertex2f(4, 6);
        glEnd();
        // end bagian atas

        //kotak bagian tengah
        glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(1, 3);
            glVertex2f(1, 4);
            glVertex2f(2, 3);
            glVertex2f(2, 4);
            glVertex2f(3, 3);
            glVertex2f(3, 4);
            glVertex2f(4, 3);
            glVertex2f(4, 4);
        glEnd();
        // end kotak bagian tengah

        //kotak bagian bawah (kaki)
        glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(2, 2);
            glVertex2f(2, 3);
            glVertex2f(3, 2);
            glVertex2f(3, 3);
        glEnd();
        //end kotak bagian bawah

        // kotak atas (mata)
        glBegin(GL_POLYGON);
            glColor3f(128, 4, 0);
            glVertex2f(2,5 , 4,5);
        glEnd();
        //end of eye



void display(void){

    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0.4, 0.8, 0.6);

    // kotak
    // locking bentuk
    glPushMatrix();
    glTranslatef(x, y, 0);
    player();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}



int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dodge The Enemies");
    //cahaya();
    //pemanggilan timer
    glutTimerFunc(1,timer,0);
    gluOrtho2D(0, 50, 0, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
