#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

// posisi kotak
int pos_x = 0;
int pos_y = 0;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    glColor3f(0.4, 0.8, 0.6);

    // kotak
    glBegin(GL_POLYGON);
        glVertex2f(pos_x, pos_y);
        glVertex2f(pos_x + 3, pos_y);
        glVertex2f(pos_x + 3,pos_y + 3);
        glVertex2f(pos_x, pos_y + 3);
    glEnd();

    glFlush();
}

void tekanKeyboardArah(int key,int x, int y){
    // ARAH KANAN
    if(key == GLUT_KEY_RIGHT && pos_x < 47){
        pos_x += 1;
        glutPostRedisplay();
    }
    // ARAH KIRI
    else if(key == GLUT_KEY_LEFT && pos_x > 0){
        pos_x -= 1;
        glutPostRedisplay();
    }
    // ARAH ATAS TEST
    if (key == GLUT_KEY_UP && pos_y < 47) {
        pos_y += 1;
        glutPostRedisplay();
    }
    else if (key == GLUT_KEY_DOWN && pos_y > 0) {
        pos_y -= 1;
        glutPostRedisplay();
    }

    cout << "posistion = " << pos_x << " " << pos_y << endl;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dodge The Enemies");
    //cahaya();
    glutSpecialFunc(tekanKeyboardArah);
    gluOrtho2D(0, 50, 0, 50);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
