class Enemy{
    public:
        int posisiXy =10;
        void GambarPersegi(){
        //kotak kiri
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(0, 3);
            glVertex2f(0, 4);
            glVertex2f(1, 4);
            glVertex2f(1, 3);
            glVertex2f(2, 3);
            glVertex2f(2, 4);
            glEnd();
        // end bagian kotak kiri //

        //kotak badan tengah
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(3, 3);
            glVertex2f(3, 4);
            glVertex2f(4,3);
            glVertex2f(4,4);
            glVertex2f(5,3);
            glVertex2f(5,4);
            glEnd();
        // end kotak bagian tengah

        //kotak bagian atas
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(3,5);
            glVertex2f(3,6);
            glVertex2f(4,5);
            glVertex2f(4,6);
            glVertex2f(5,5);
            glVertex2f(5,6);
            glVertex2f(3,7);
            glVertex2f(3,8);
            glVertex2f(4,7);
            glVertex2f(4,8);
            glVertex2f(5,7);
            glVertex2f(5,8);
            glEnd();
        //end kotak bagian atas

        // kotak atas (mata)
            glBegin(GL_POLYGON);
            glColor3f(128, 4, 0);
            glVertex2f(4,6);
            glEnd();
        //end of eye


      }

};
