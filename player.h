class Player{
    public:
        void GambarPlayer() {

            // start of bagian kiri

            //kotak biru muda
            glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(0, 3);
            glVertex2f(0, 4);
            glVertex2f(1, 4);
            glVertex2f(1, 3);
            glEnd();

            // start of sayap kiri
            glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(0, 5);
            glVertex2f(0, 7);
            glVertex2f(2, 7);
            glVertex2f(2, 5);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(1, 4);
            glVertex2f(1, 8);
            glVertex2f(2, 8);
            glVertex2f(2, 4);
            glEnd();
            // end of sayap kiri

            // kotak atas sayap kiri
            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(1, 8);
            glVertex2f(1, 9);
            glVertex2f(2, 9);
            glVertex2f(2, 8);
            glEnd();

            // end of sayap kiri

            // start of badan dan kaki

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(2, 5);
            glVertex2f(2, 6);
            glVertex2f(7, 6);
            glVertex2f(7, 5);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(3, 9);
            glVertex2f(6, 9);
            glVertex2f(6, 4);
            glVertex2f(3, 4);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(3, 4);
            glVertex2f(4, 4);
            glVertex2f(4, 2);
            glVertex2f(3, 2);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(2, 2);
            glVertex2f(2, 3);
            glVertex2f(3, 3);
            glVertex2f(3, 2);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(5, 4);
            glVertex2f(5, 2);
            glVertex2f(6, 2);
            glVertex2f(6, 4);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2f(6, 2);
            glVertex2f(6, 3);
            glVertex2f(7, 3);
            glVertex2f(7, 2);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(225, 255, 0);
            glVertex2f(4, 7);
            glVertex2f(4, 8);
            glVertex2f(5, 8);
            glVertex2f(5, 7);
            glEnd();

            //kotak kaki bawah
            glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(3,1);
            glVertex2f(3,2);
            glVertex2f(4,2);
            glVertex2f(4,1);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(5,1);
            glVertex2f(5,2);
            glVertex2f(6,2);
            glVertex2f(6,1);
            glEnd();

            // end of badan dan kaki

            // start of sayap kanan

            //kotak atas sayap kanan
            glBegin(GL_POLYGON);
            glColor3f(207, 0, 0);
            glVertex2d(7,8);
            glVertex2f(7,9);
            glVertex2f(8,9);
            glVertex2f(8,8);
            glEnd();

            //sayap kanan
            glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(7,4);
            glVertex2f(7,8);
            glVertex2f(8,8);
            glVertex2f(8,4);
            glEnd();

            glBegin(GL_POLYGON);
            glColor3f(151, 0, 189);
            glVertex2f(8,5);
            glVertex2f(8,7);
            glVertex2f(9,7);
            glVertex2f(9,5);
            glEnd();

            //kotak bawah
            glBegin(GL_POLYGON);
            glColor3f(0, 242, 255);
            glVertex2f(8,3);
            glVertex2f(8,4);
            glVertex2f(9,4);
            glVertex2f(9,3);
            glEnd();
            }
            float posisiX[2]={0,10};
            float posisiY[2] = {0,10};
        void ColliderPersegi(){ // Collider bentuk kotak
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(0.063, 0.91, 0.176);
            glVertex2f(posisiX[0], posisiY[0]);
            glVertex2f(posisiX[1], posisiY[0]);
            glVertex2f(posisiX[1], posisiY[1]);
            glVertex2f(posisiX[0], posisiY[1]);
            glEnd();
            glPopMatrix();
}

    };


