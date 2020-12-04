class Enemy{
    public:
        int posisiXy =10;
        void GambarPersegi(){
            glBegin(GL_POLYGON);
            glVertex2f(0,0);
            glVertex2f(10,0);
            glVertex2f(10,10);
            glVertex2f(0,10);
            glEnd();
      }

};

