class Enemy3{
    public:
        void GambarPersegi(){
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0,0.0,1.0);
            glVertex2f(50,20);
            glVertex2f(50,30);
            glVertex2f(60,30);
            glVertex2f(60,20);
            glEnd();
        glPopMatrix();
      }
        void ColliderPersegi(float x3, float y3){ // Collider bentuk kotak
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0f,1.0f,1.0f);
            glVertex2f(x3, y3);
            glVertex2f(x3+10, y3);
            glVertex2f(x3+10, y3+10);
            glVertex2f(x3, y3+10);
            glEnd();
            glPopMatrix();
       }

};
