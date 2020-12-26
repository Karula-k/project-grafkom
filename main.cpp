#include <GL/glut.h>
#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
#include <fstream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include "musuh.h"
#include "spider.h"
#include "player.h"
#include "enemy.h"
#include "enemy2.h"
#include "enemy3.h"
#include "printer.h"
#include "background.h"
#include "page2.h"
#include "page3.h"
#include "matahari.h"

using namespace std;
int nyawa = 5;
float var1 = 1*1000;
float var2;
char text_nyawa[1000];
float x, y;
// x1 y1 untuk enemy
float x1 = -30;
float y1 = (rand() % 40 + 1);
// enemy 2
float x2 = (rand() % 40 + 1);
float y2 = 80;
//enemy 3
float x3 = 80;
float y3 = (rand() % 40 + 1);
bool live =false;
bool pageend = false;
float timing = 0;
float cek = 1000;
Enemy2 enemy2;
Enemy3 enemy3;
Page2 page2;
Page3 page3;
Matahari matahari;
float cooldown = 10;
// Collider
float arenaX[2] = {0, 50};
float arenaY[2] = {0, 50};
float windowSize[2] = {400,400};
float orthoSize[4] = {
    0, // xStart
    50, // xEnd
    0, // yStart
    50 // yEnd
};
// Posisi titik
int tombol[4] = {
    15, // xStart
    30, // xEnd
    20, // yStart
    35// yEnd
};
int tombol2[4] = {
    15, // xStart
    30, // xEnd
    20, // yStart
    35// yEnd
};
bool tombolActive;
//int  win_width, win_height;

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

void diplayenemy3(void){
        glPushMatrix();
        //glTranslated(x1,y1,0);
        enemy.GambarPersegi();
        glPopMatrix();
}

void text_draw(void){
    sprintf(text_nyawa, "nyawa %d", nyawa );
    glPushMatrix();
    glColor3f(1.0f,0.0f,0.0f);
    printer.drawText(0,47,text_nyawa);
    glPopMatrix();
    glPushMatrix();
    sprintf(text_score, "Score %d",totalScore  );
    printer.drawText(35,47,text_score);
    glPopMatrix();
}

void page1(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glEnable(GL_COLOR_MATERIAL);
    // kotak
    glPushMatrix();
    background.sky();
    background.land();
    glPopMatrix();
    glPushMatrix();
    background.loot_ofbg(0,-5,0);
    background.loot_ofbg(0,1,0);
    background.loot_ofbg(0,-2,0);
    glPopMatrix();
    glPushMatrix();
    glTranslated(10,15,0);
    background.gravestone();
    glPopMatrix();
    glPushMatrix();
    glTranslated(5,10,0);
    background.gravestone();
    glPopMatrix();
    glPushMatrix();
    glTranslated(20,8,0);
    background.gravestone();
    glPopMatrix();
    glPushMatrix();
    glColor3f(1.0f,0.0f,0.0f);
    glScaled(5,5,0);
    glTranslated(5,4,0);
    matahari.gambarmata();
    glPopMatrix();
    // locking bentuk
    glPushMatrix();
    glTranslatef(x, y, 0);
    player.GambarPlayer();
    glPopMatrix();

    //enemy 1
    glPushMatrix();
    glTranslatef(x1,y1,0);
    diplayenemy();
    glPopMatrix();

    //enemy 2
    glPushMatrix();
    glTranslatef(x2,y2,0);
    diplayenemy();
    glPopMatrix();

    //enemy3
    glPushMatrix();
    glTranslatef(x3,y3,0);
    diplayenemy();
    glPopMatrix();
    glPushMatrix();
    text_draw();
    glPopMatrix();
    glFlush();
    glutSwapBuffers();
}
void display(){
    glClear(GL_COLOR_BUFFER_BIT);
    if(nyawa>0 && live){
        page1();
    } else if(nyawa<=0 &&live==false) {
        page2.drawpage2();
    }else{
        pageend =true;
        page3.menupage();
    }
    glutSwapBuffers();
}
//timer yang disinkronasikan dengan gerakan dan collision
void timer(int data)
{
    if (nyawa<=0){
            sprintf(text_score, "%d",totalScore);
            live=false;
        }
    srand((unsigned) time(0)); //srand supaya tiap pemanggilan random valuenya selalu berubah
    int random1 = rand() % 40;
    int random2 = rand() % 40;
    int random3 = rand() % 40;

    // enemy1 spawn di posisi berbeda ketika keluar window

    if (x1 <= arenaX[1]&&live) {
        x1 += 0.03f;
        //cout << "x1 = " << x1 << endl;
    } else if (x1 > arenaX[1]&&live) {
        x1 = -20;
        y1 = random1;
        cout << "y1 = " << y1 << endl;
    }
    // end of random spawn

    // enemy2 spawn di posisi berbeda ketika keluar window

    if (y2 >= arenaY[0]-30&&live) {
        y2 -= 0.03f;

    } else if (y2 < arenaY[0]&&live) {
        y2 = 80;
        x2 = random2;
        cout << "x2 = " << x2 << endl;
    }
    // end of random spawn

    // enemy3 spawn di posisi berbeda ketika keluar window

    if (x3 >= arenaX[0]-30&&live) {
        x3 -= 0.04f;
        //cout << "x1 = " << x1 << endl;
    } else if (x3 < arenaX[0]&&live) {
        x3 = 80;
        y3 = random3;
        cout << "y3 = " << y3 << endl;
    }
    // end of random spawn

    // collisin enemy
    if (var2>0){
        var2--;
    }
    if (var2<=0){
        if(player.posisiX[0]< x1 +10 &&
            player.posisiX[0] + 10 > x1 &&
            player.posisiY[0] < y1 + 10 &&
            player.posisiY[0] + 10 > y1&&live)
        {
        nyawa--;
        cout<<"Collision Detected"<<endl;
        cout<<nyawa<<endl;
        var2=var1;
        }
    }

    //colision enemy2
    if (var2>0){
        var2--;
    }
    if (var2<=0){
        if(player.posisiX[0]< x2 +10 &&
            player.posisiX[0] + 10 > x2 &&
            player.posisiY[0] < y2 + 10 &&
            player.posisiY[0] + 10 > y2&&live)
        {
        nyawa--;
        cout<<"Collision Detected"<<endl;
        cout<<nyawa<<endl;
        var2=var1;
        }

    }

    //colision enemy3
    if (var2>0){
        var2--;
    }
    if (var2<=0){
        if(player.posisiX[0]< x3 +10 &&
            player.posisiX[0] + 10 > x3 &&
            player.posisiY[0] < y3 + 10 &&
            player.posisiY[0] + 10 > y3&&live)
        {
        nyawa--;
        cout<<"Collision Detected"<<endl;
        cout<<nyawa<<endl;
        var2=var1;
        }

    }
    if(live){
        timing++;
        if (timing >= cek){
            totalScore+=25;
            cek+=1000;
        }
    }
    // Jika menekan tombol panah kiri
    if(GetAsyncKeyState(VK_LEFT)){
        if (player.posisiX[0]>arenaX[0]&&live) {
                player.posisiX[0]-=0.1f;
                player.posisiX[1]-=0.1f;
                x-=0.1f;
                cout<<"left"<<x<<" "<<y<<"\n";
            }
    }
    // Jika menekan tombol panah kanan
    else if(GetAsyncKeyState(VK_RIGHT)){
        if (player.posisiX[1]<arenaX[1]&&live) {
            x+=0.1f;
            player.posisiX[0]+=0.1f;
            player.posisiX[1]+=0.1f;
             cout<<"right"<<x<<" "<<y<<"\n";
        }
    }

    // Jika menekan tombol panah atas
    if(GetAsyncKeyState(VK_UP)){
         if (player.posisiY[0]>=arenaY[0]&& player.posisiY[1]<arenaY[1]&&live) {
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
        if (player.posisiY[1]<=arenaY[1] && player.posisiY[0]>arenaY[0]&&live ){
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
void getMouseActivePos(int button, int state, int rawPosX, int rawPosY) {
    // Mendapatkan posisi mouse setelah diproses
    int mousePositionX = rawPosX / 10; // Posisi raw dibagi ratio ortho dengan window size
	int mousePositionY = orthoSize[3] - (rawPosY / 10); // Posisi raw dibagi ratio ortho dengan window size

	if (button == GLUT_LEFT_BUTTON && // apabila menekan tombol mouse kiri
     state == GLUT_ENTERED){ // apabila mouse sedang berada diatas window
        cout << "Posisi X: " << mousePositionX << "\n";
        cout << "Posisi Y: " << mousePositionY << "\n";
        cout << "==========\n";

        // Collide dengan tombol
        if (mousePositionX >= tombol[0] && mousePositionX <= tombol[1]){
            if (mousePositionY >= tombol[2] && mousePositionY <= tombol[3]){
                // Code Here
                cout << "hello there!!\n";
                tombolActive = !tombolActive;
                live=true;
            }
        }
       if (mousePositionX >= tombol2[0] && mousePositionX <= tombol2[1]&&pageend){
            if (mousePositionY >= tombol2[2] && mousePositionY <= tombol2[3]){
                // Code Here
                cout << "hello there!!\n";
                pageend=false;
                live =true;
                totalScore = 0;
                nyawa =5;
            }
        }
	}
}
//void on_resize(int w, int h)
//{
//    win_width = w;
//    win_height = h;
//    glViewport(0, 0, w, h);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    glOrtho(-w / 2, w / 2, -h / 2, h / 2, -1, 1);
//    glMatrixMode(GL_MODELVIEW);
//    glLoadIdentity();
//    display(); // refresh window.
//}
int main(int argc, char *argv[]){
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Dodge The Enemies");
    //cahaya();
    //pemanggilan timer
    glutTimerFunc(1,timer,0);
    gluOrtho2D(0, 50, 0, 50);
    glutDisplayFunc(display);
  //  glutReshapeFunc(on_resize);
    glutMouseFunc(getMouseActivePos);
    glutMainLoop();
    return 0;
}
