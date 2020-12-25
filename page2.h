Player player;
Printer printer;
class Page2{
    public:
        void drawpage2(void){
        glColor3f(1.0f,0.0f,1.0f);
        glPushMatrix();
        glTranslatef(25, 25, 0);
        player.GambarPlayer();
        glPopMatrix();
        glPushMatrix();
        printer.drawText(25,47,"YOUR LIVE IS 0");
        glPopMatrix();
        glFlush();
    }
};

