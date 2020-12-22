#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <string>
#include <sstream>
#include "player.h"
#include "enemy.h"
#include "enemy2.h"
#include "printer.h"


using namespace std;
int nyawa = 5;
float var1 = 3*1000;
float var2;
char text_nyawa[1000];
float x, y;
// x1 y1 untuk enemy
float x1 = -30;
float y1 = (rand() % 40 + 1);
// enemy 2
float x2 = (rand() % 40 + 1);
float y2 = 80;

Player player;
Enemy enemy;
Enemy2 enemy2;
Printer printer;
float cooldown = 10;
// Collider
float arenaX[2] = {0, 50};
float arenaY[2] = {0, 50};
void Colliderarena(){ // Collider bentuk kotak
    glPushMatrix();
    glBegin(GL_POLYGON);
	glVertex2f(arenaX[0], arenaY[0]);
	glVertex2f(arenaX[1], arenaY[0]);
	glVertex2f(arenaX[1], arenaY[1]);
	glVertex2f(arenaX[0], arenaY[1]);
	glEnd();
    glPopMatrix();
}
// 5-662
float RandomFloat(float min, float max)
{
    float r = (float)rand() / (float)RAND_MAX;
    return min + r * (max - min);
}

void diplayenemy(void){
        glPushMatrix();
        //glTranslated(x1,y1,0);
        enemy.GambarPersegi();
        glPopMatrix();
    }

void displayenemy2(void) {
        glPushMatrix();
        //glTranslated(x1,y1,0);
        enemy2.GambarPersegi();
        glPopMatrix();
}

void text_draw(void){
    sprintf(text_nyawa, "nyawa %d", nyawa );
    glPushMatrix();
    glColor3f(1.0f,0.0f,0.0f);
    printer.drawText(0,47,text_nyawa);
    glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    // kotak
    // locking bentuk
    glPushMatrix();
    glTranslatef(x, y, 0);
    player.GambarPlayer();
    glPopMatrix();

    glPushMatrix();
    enemy.ColliderPersegi(x1,y1);
    glTranslatef(x1,y1,0);
    diplayenemy();
    glPopMatrix();

    glPushMatrix();
    enemy.ColliderPersegi(x2,y2);
    glTranslatef(x2,y2,0);
    diplayenemy();
    glPopMatrix();

    text_draw();
    glFlush();
    glutSwapBuffers();
}

//timer yang disinkronasikan dengan gerakan dan collision
void timer(int data)
{
    // enemy1 spawn di posisi berbeda ketika keluar window
    srand((unsigned) time(0)); //srand supaya tiap pemanggilan random valuenya selalu berubah
    if (x1 <= arenaX[1]) {
        x1 += 0.03f;
        //cout << "x1 = " << x1 << endl;
    } else if (x1 > arenaX[1]) {
        x1 = -20;
        y1 = (rand() % 40);
        //cout << "y1 = " << y1 << endl;
    }
    // end of random spawn

    // enemy2 spawn di posisi berbeda ketika keluar window
    srand((unsigned) time(0)); //srand supaya tiap pemanggilan random valuenya selalu berubah
    if (y2 >= arenaY[0]-30) {
        y2 -= 0.03f;

    } else if (y2 < arenaY[0]) {
        y2 = 80;
        x2 = (rand() % 40);
        //cout << "y1 = " << y1 << endl;
    }
    // end of random spawn

    //colisin
    if (var2>0){
        var2--;
    }
    if (var2<=0){
        if(player.posisiX[0]< x1 +10 &&
            player.posisiX[0] + 10 > x1 &&
            player.posisiY[0] < y1 + 10 &&
            player.posisiY[0] + 10 > y1)
        {
        nyawa--;
        cout<<"Collision Detected"<<endl;
        cout<<nyawa<<endl;
        var2=var1;
        }

    }

    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (player.posisiX[0]>arenaX[0]) {
                player.posisiX[0]-=0.1f;
                player.posisiX[1]-=0.1f;
                x-=0.1f;
                cout<<"left"<<x<<" "<<y<<"\n";
            }
    }
    // Jika menekan tombol panah kanan
    else if(GetAsyncKeyState(VK_RIGHT)){
        if (player.posisiX[1]<arenaX[1]) {
            x+=0.1f;
            player.posisiX[0]+=0.1f;
            player.posisiX[1]+=0.1f;
             cout<<"right"<<x<<" "<<y<<"\n";
        }
    }

    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
         if (player.posisiY[0]>=arenaY[0]&& player.posisiY[1]<arenaY[1]) {
            y+=0.1f;
            player.posisiY[0]+=0.1f;
            player.posisiY[1]+=0.1f;
             cout<<"up"<<x<<" "<<y<<"\n";            }
        else {
            y=40;
            player.posisiY[0]=40;
            player.posisiY[1]=50;
         }
    }
    // Jika menekan tombol panah bawah
    else if (GetAsyncKeyState(VK_DOWN)){
        if (player.posisiY[1]<=arenaY[1] && player.posisiY[0]>arenaY[0] ){
            y-=0.1f;
            player.posisiY[0]-=0.1f;
            player.posisiY[1]-=0.1f;
             cout<<"down"<<x<<" "<<y<<"\n";
           }
        else{
            y=0;
            player.posisiY[0]=0;
            player.posisiY[1]=10;
        }
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
