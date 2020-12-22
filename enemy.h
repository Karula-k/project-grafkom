class Enemy{
    public:
        void GambarPersegi(){
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0,0.0,1.0);
            glVertex2f(0,0);
            glVertex2f(10,0);
            glVertex2f(10,10);
            glVertex2f(0,10);
            glEnd();
        glPopMatrix();
      }
        void ColliderPersegi(float x1, float y1){ // Collider bentuk kotak
            glPushMatrix();
            glBegin(GL_POLYGON);
            glColor3f(1.0f,1.0f,1.0f);
            glVertex2f(x1, y1);
            glVertex2f(x1+10, y1);
            glVertex2f(x1+10, y1+10);
            glVertex2f(x1, y1+10);
            glEnd();
            glPopMatrix();
       }

};
