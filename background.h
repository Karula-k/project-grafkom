class Background{
    public:

        void GambarBg(){

        //badan Kiri Pohon
            glBegin(GL_POLYGON);
            glColor3ub(50, 205, 50);
            glVertex2f(7.31648, 14.41655);
            glVertex2f(6.64518, 13.07394);
            glVertex2f(5.97387, 11.60346);
            glVertex2f(5.33453, 10.45265);
            glVertex2f(4.5993, 8.98218);
            glVertex2f(3.83209, 7.54367);
            glVertex2f(3.06488, 6.00926);
            glVertex2f(2.42555, 4.95435);
            glVertex2f(1.62637, 3.67567);
            glVertex2f(4.75913, 3.73961);
            glVertex2f(7.06075, 3.80354);
            glEnd();

            // Badan kanan Pohon
            glBegin(GL_POLYGON);
            glColor3ub(50, 205, 50);
            glVertex2f(7.31648, 14.41655);
            glVertex2f(7.98518, 13.07394);
            glVertex2f(8.64387, 11.60346);
            glVertex2f(9.0853, 10.45265);
            glVertex2f(9.8293, 8.98218);
            glVertex2f(10.58209, 7.54367);
            glVertex2f(11.45488, 6.00926);
            glVertex2f(12.09555, 4.95435);
            glVertex2f(12.89637, 3.67567);
            glVertex2f(9.75913, 3.73961);
            glVertex2f(7.06075, 3.80354);
            glEnd();

            //Batang bawah
            glBegin(GL_POLYGON);
            glColor3ub(150, 75, 0);
            glVertex2f(7, 2);
            glVertex2f(7.06125, 2.48909);
            glVertex2f(7.0897, 3.15756);
            glVertex2f(7.06075, 3.80354);
            glVertex2f(7.5875, 3.81181);
            glVertex2f(7.60172, 3.17178);
            glVertex2f(7.68706, 2.51753);
            glVertex2f(7.72973, 2.01973);
            glVertex2f(7.41683, 2.10507);
            glEnd();

               }
        void loot_ofbg(int xbg,int ybg,int zbg){
            glPushMatrix();
            glTranslated(0+xbg,25+ybg,0+zbg);
            GambarBg();
            glPopMatrix();
            glPushMatrix();
            glTranslated(10+xbg,25+ybg,0+zbg);
            GambarBg();
            glPopMatrix();
            glPushMatrix();
            glTranslated(20+xbg,25+ybg,0+zbg);
            GambarBg();
            glPopMatrix();
            glPushMatrix();
            glTranslated(30+xbg,25+ybg,0+zbg);
            GambarBg();
            glPopMatrix();
            glPushMatrix();
            glTranslated(40+xbg,25+ybg,0+zbg);
            GambarBg();
            glPopMatrix();
        }

        void sky(){
            glPushMatrix();
            glColor3ub(53,81,98);
            glBegin(GL_POLYGON);
            glVertex2f(0,25);
            glVertex2f(50,25);
            glVertex2f(50,50);
            glVertex2f(0,50);
            glPopMatrix();
            glEnd();
        }
      void land(){
        glPushMatrix();
        glColor3ub(155,118,83);
        glBegin(GL_POLYGON);
        glVertex2f(0,0);
        glVertex2f(50,0);
        glVertex2f(50,25);
        glVertex2f(0,25);
        glEnd();
        glPopMatrix();
       }
     void gravestone(){
        glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3ub(85,93,80);
        glVertex2f(0,0);
        glVertex2f(0,2);
        glVertex2f(4,2);
        glVertex2f(4,0);
        glEnd();
        glBegin(GL_POLYGON);
        glVertex2f(0,2);
        glVertex2f(1,4);
        glVertex2f(3,4);
        glVertex2f(4,2);
        glEnd();
        glPopMatrix();
     }
     void bg_1(){
        glPushMatrix();
        glEnable (GL_BLEND);
        glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(0.0f, 1.0f, 1.0f, 1.0f);
        glBegin(GL_POLYGON);
        glVertex2f(0,50);
        glVertex2f(0,50);
        glVertex2f(50,50);
        glVertex2f(50,0);
        glEnd();
        glPopMatrix();
     }
     void bg_2(){
        glPushMatrix();
        glEnable (GL_BLEND);
        glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
        glColor4f(1.0f, 0.5f, 0.0f, 0.0f);
        glBegin(GL_POLYGON);
        glVertex2f(0,50);
        glVertex2f(0,50);
        glVertex2f(50,50);
        glVertex2f(50,0);
        glEnd();
        glPopMatrix();
     }
};



