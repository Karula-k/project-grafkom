#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

float x; float y;

void player() {

    // start of bagian kiri

        //kotak biru muda
        glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(0, 3);
            glVertex2f(0, 4);
            glVertex2f(1, 4);
            glVertex2f(1, 3);
        glEnd();

        // start of sayap kiri
        glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(0, 5);
            glVertex2f(0, 7);
            glVertex2f(2, 7);
            glVertex2f(2, 5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(1, 4);
            glVertex2f(1, 8);
            glVertex2f(2, 8);
            glVertex2f(2, 4);
        glEnd();
        // end of sayap kiri

        // kotak atas sayap kiri
        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(1, 8);
            glVertex2f(1, 9);
            glVertex2f(2, 9);
            glVertex2f(2, 8);
        glEnd();

    // end of sayap kiri

    // start of badan dan kaki

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(2, 5);
            glVertex2f(2, 6);
            glVertex2f(7, 6);
            glVertex2f(7, 5);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(3, 9);
            glVertex2f(6, 9);
            glVertex2f(6, 4);
            glVertex2f(3, 4);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(3, 4);
            glVertex2f(4, 4);
            glVertex2f(4, 2);
            glVertex2f(3, 2);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(2, 2);
            glVertex2f(2, 3);
            glVertex2f(3, 3);
            glVertex2f(3, 2);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(5, 4);
            glVertex2f(5, 2);
            glVertex2f(6, 2);
            glVertex2f(6, 4);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(6, 2);
            glVertex2f(6, 3);
            glVertex2f(7, 3);
            glVertex2f(7, 2);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(225, 255, 0);
            glVertex2f(4, 7);
            glVertex2f(4, 8);
            glVertex2f(5, 8);
            glVertex2f(5, 7);
        glEnd();

        //kotak kaki bawah
        glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(3,1);
            glVertex2f(3,2);
            glVertex2f(4,2);
            glVertex2f(4,1);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(5,1);
            glVertex2f(5,2);
            glVertex2f(6,2);
            glVertex2f(6,1);
        glEnd();

    // end of badan dan kaki

    // start of sayap kanan

        //kotak atas sayap kanan
        glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2d(7,8);
            glVertex2f(7,9);
            glVertex2f(8,9);
            glVertex2f(8,8);
        glEnd();

        //sayap kanan
        glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(7,4);
            glVertex2f(7,8);
            glVertex2f(8,8);
            glVertex2f(8,4);
        glEnd();

        glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(8,5);
            glVertex2f(8,7);
            glVertex2f(9,7);
            glVertex2f(9,5);
        glEnd();

        //kotak bawah
        glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(8,3);
            glVertex2f(8,4);
            glVertex2f(9,4);
            glVertex2f(9,3);
        glEnd();
}

void display(void)
{
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
