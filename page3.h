Enemy enemy;
class Page3{
    public:
    void menupage(void){
        glPushMatrix();
        glColor3f(1.0f,0.0f,0.0f);
        printer.drawText(15,25,"Click to Start Game");
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0f,0.0f,1.0f);
        //glTranslatef(22,16,0);
        //enemy.GambarPersegi();
        glPopMatrix();
        glFlush();
    }
};

