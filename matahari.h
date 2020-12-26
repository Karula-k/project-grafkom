class Matahari{
public:
    void gambarmata(){
        glPushMatrix();
        glBegin(GL_POLYGON);
        glColor3ub(218, 43, 39);
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
        glPopMatrix();
    }
};

