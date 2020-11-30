#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

float x; float y;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0.4, 0.8, 0.6);

    // kotak
    // locking bentuk
    glPushMatrix();
    glTranslatef(x, y, 0);
    glBegin(GL_POLYGON);
        glVertex2f(0, 0);
        glVertex2f(3, 0);
        glVertex2f(3,3);
        glVertex2f(0, 3);
    glEnd();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}

//timer yang disinkronasikan dengan gerakan
void timer(int data)
{
    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        x-=0.1f;
    }
    // Jika menekan tombol panah kanan
    else if(GetAsyncKeyState(VK_RIGHT)){
        x+=0.1f;
    }

    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
        y+=0.1f;
        }
    // Jika menekan tombol panah bawah
    else if (GetAsyncKeyState(VK_DOWN)){
        y-=0.1f;
    }

    glutPostRedisplay();
	glutTimerFunc(1,timer,0);
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
