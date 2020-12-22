class Enemy2{
    public:
        void GambarPersegi(){
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0,0.0,1.0);
            glVertex2f(20,20);
            glVertex2f(30,20);
            glVertex2f(30,30);
            glVertex2f(20,30);
            glEnd();
        glPopMatrix();
      }
        void ColliderPersegi(float x2, float y2){ // Collider bentuk kotak
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0f,1.0f,1.0f);
            glVertex2f(x2, y2);
            glVertex2f(x2+10, y2);
            glVertex2f(x2+10, y2+10);
            glVertex2f(x2, y2+10);
            glEnd();
            glPopMatrix();
       }

};
