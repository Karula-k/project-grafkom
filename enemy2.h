class Enemy2{
    public:
        int posisiXy =20;
        void GambarKotak(){
         //kotak atas
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(1, 5);
            glVertex2f(1, 6);
            glVertex2f(2, 5);
            glVertex2f(2, 6);
            glVertex2f(3, 5);
            glVertex2f(3, 6);
            glVertex2f(4, 5);
            glVertex2f(4, 6);
            glEnd();
        // end bagian atas

        //kotak bagian tengah
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(1, 3);
            glVertex2f(1, 4);
            glVertex2f(2, 3);
            glVertex2f(2, 4);
            glVertex2f(3, 3);
            glVertex2f(3, 4);
            glVertex2f(4, 3);
            glVertex2f(4, 4);
            glEnd();
        // end kotak bagian tengah

        //kotak bagian bawah (kaki)
            glBegin(GL_POLYGON);
            glColor3f(165, 42, 42);
            glVertex2f(2, 2);
            glVertex2f(2, 3);
            glVertex2f(3, 2);
            glVertex2f(3, 3);
            glEnd();
        //end kotak bagian bawah

        // kotak atas (mata)
            glBegin(GL_POLYGON);
            glColor3f(128, 4, 0);
            glVertex2f(2.5 , 4.5);
            glEnd();
        //end of eye

      }

};
