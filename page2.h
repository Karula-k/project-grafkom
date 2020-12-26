Player player;
Background background;
Printer printer;
int totalScore;
char text_score[1000];
class Page2{
    public:
        void drawpage2(void){
        glPushMatrix();
        background.bg_2();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(20, 25, 0);
        player.GambarPlayer();
        glPopMatrix();
        glPushMatrix();
        printer.drawText(17,35,"GAME OVER");
        glPopMatrix();
        glPushMatrix();
        glColor3f(1.0f,0.0f,0.0f);
        printer.drawText(15,20,"Click to Restart Game");
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0f,0.0f,1.0f);
        sprintf(text_score, "your score %d",totalScore);
        printer.drawText(15,10,text_score);
        glPopMatrix();
        glFlush();
    }
};

