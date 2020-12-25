class Enemy3{
    public:
        void GambarPersegi(){
            glPushMatrix();
            glBegin(GL_POLYGON);
           musuh.GambarCircle();
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
