Player player;
Printer printer;
class Page2{
    public:
        void drawpage2(void){
        /*glColor3f(1.0f,0.0f,1.0f);
        glPushMatrix();
        glTranslatef(20, 20, 0);
        player.GambarPlayer();
        glPopMatrix();
        glPushMatrix();
        printer.drawText(15,25,"GAME OVER");
        glPopMatrix();
        glFlush();*/
        glPushMatrix();
        glColor3f(1.0f,0.0f,0.0f);
        printer.drawText(15,25,"Click to Restart Game");
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0f,0.0f,1.0f);
        //glTranslatef(22,16,0);
        //enemy.GambarPersegi();
        glPopMatrix();
        glFlush();
    }
};

