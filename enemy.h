Musuh musuh;
class Enemy{
    public:
        void GambarPersegi(){
            glPushMatrix();
            musuh.GambarCircle();
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
