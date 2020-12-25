Enemy enemy;
class Page3{
    public:
    void menupage(void){
        glPushMatrix();
        glColor3f(1.0f,0.0f,0.0f);
        printer.drawText(15,22,"Pejet bang");
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0f,0.0f,1.0f);
        glTranslatef(15,25,0);
        enemy.GambarPersegi();
        glPopMatrix();
        glFlush();
    }
};

