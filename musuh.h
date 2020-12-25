class Musuh{
    public:
        int posisiXy =10;
        void GambarCircle(){

        //badan
            glBegin(GL_LINE_LOOP);
            glColor3ub(255, 255, 255);
            glVertex2f(1, 0.5); // Huruf C
            glVertex2f(1.2, 0.7);
            glVertex2f(1.4, 0.9);
            glVertex2f(1.6, 1.1);
            glVertex2f(1.8, 1.3);
            glVertex2f(2, 1.5);
            glVertex2f(2.2, 1.3);
            glVertex2f(2.4, 1.1);
            glVertex2f(2.6, 0.9);
            glVertex2f(2.8, 0.7);
            glVertex2f(3, 0.5);
            glVertex2f(3.2, 0.7);
            glVertex2f(3.4, 0.9);
            glVertex2f(3.6, 1.1);
            glVertex2f(3.8, 1.3);
            glVertex2f(4, 1.5);
            glVertex2f(4.2, 1.3);
            glVertex2f(4.4, 1.1);
            glVertex2f(4.6, 0.9);
            glVertex2f(4.8, 0.7);
            glVertex2f(5, 0.5);
            glVertex2f(5.2, 0.7);
            glVertex2f(5.4, 0.9);
            glVertex2f(5.6, 1.1);
            glVertex2f(5.8, 1.3);
            glVertex2f(6, 1.5);
            glVertex2f(6.2, 1.3);
            glVertex2f(6.4, 1.1);
            glVertex2f(6.6, 0.9);
            glVertex2f(6.8, 0.7);
            glVertex2f(7, 0.5);
            glVertex2f(7.2, 0.7);
            glVertex2f(7.4, 0.9);
            glVertex2f(7.6, 1.1);
            glVertex2f(7.8, 1.3);
            glVertex2f(8, 1.5);
            glVertex2f(8.2, 1.3);
            glVertex2f(8.4, 1.1);
            glVertex2f(8.6, 0.9);
            glVertex2f(8.8, 0.7);
            glVertex2f(9, 0.5);
            glVertex2f(9, 6);
            glVertex2f(8, 7.5);
            glVertex2f(7, 8.5);
            glVertex2f(6, 9.5);
            glVertex2f(5, 10); // titik atas tengah
            glVertex2f(4, 9.5);
            glVertex2f(3, 8.5);
            glVertex2f(2, 7.5);
            glVertex2f(1, 6);
            glEnd();
        // end of badan

        //mata kiri
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(3.5395705990007, 4.5445531221579);
            glVertex2f(3.8748936969569, 4.6421535472652);
            glVertex2f(4.096064250928, 4.8633241012363);
            glVertex2f(4.1745441249178, 5.148705461199);
            glVertex2f(4.1031987849271, 5.4340868211618);
            glVertex2f(3.9105663669522, 5.6909300451282);
            glVertex2f(3.5253015310025, 5.8193516571115);
            glVertex2f(3.2113820350435, 5.7551408511198);
            glVertex2f(3, 5.5);
            glVertex2f(2.8889010982856, 5.14100016448);
            glVertex2f(2.9830769470734, 4.8989967712316);
            glVertex2f(3.1971129670454, 4.6564226152633);
            glEnd();
        // end of mata kiri

        // mata kanan
            glBegin(GL_POLYGON);
            glColor3ub(255, 255, 255);
            glVertex2f(6.5395705990007, 4.5445531221579);
            glVertex2f(6.8748936969569, 4.6421535472652);
            glVertex2f(7.096064250928, 4.8633241012363);
            glVertex2f(7.1745441249178, 5.148705461199);
            glVertex2f(7.1031987849271, 5.4340868211618);
            glVertex2f(6.9105663669522, 5.6909300451282);
            glVertex2f(6.5253015310025, 5.8193516571115);
            glVertex2f(6.2113820350435, 5.7551408511198);
            glVertex2f(6, 5.5);
            glVertex2f(5.8889010982856, 5.14100016448);
            glVertex2f(5.9830769470734, 4.8989967712316);
            glVertex2f(6.1971129670454, 4.6564226152633);
            glEnd();
        //end of mata kanan
      }

};

