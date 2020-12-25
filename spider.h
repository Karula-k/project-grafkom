class Spider{
public:
    void Drawspider(){
        glPushMatrix();
        //draw body bawah
        glBegin(GL_POLYGON);
        glVertex2f(3.6680937058292, 4.0295062210152);
        glVertex2f(4.711819191573, 2.8072487442889);
        glVertex2f(5.2748816246717, 2.83471520444);
        glVertex2f(6.3438330487126, 3.9720460150317);
        glVertex2f(6.3342349411998, 4.615119218384);
        glVertex2f(3.6543604757536, 4.7024344947185);
        glEnd();
        glPopMatrix();
        //draw body tengah
        glPushMatrix();
        glBegin(GL_POLYGON);
        glVertex2f(3.9677216606056,4.6439135409222);
        glVertex2f(6.1038803608945, 4.6439135409222);
        glVertex2f(6.0462917158182, 5.1526132390963);
        glVertex2f(3.9677216606056, 5.1658877799461);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glBegin(GL_POLYGON);
        glVertex2f(5.5907459164099, 5.1693643172881);
        glVertex2f(5.6044791464855, 5.7049602902356);
        glVertex2f(5.4970687931576, 5.8938406486647);
        glVertex2f(5.2691418163712, 6.1894216988069);//z
        glVertex2f(5, 5.8);
        glVertex2f(4.7392988305324, 6.2530028571076);
        glVertex2f(4.393134746451, 5.7443535907023);
        glVertex2f(4.3825378867342, 5.1650585928518);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(3.6680937058292, 4.0295062210152);
        glVertex2f(2.7837760710156, 3.1898949446972);
        glVertex2f(3.4864247488549, 1.919722334757);
        glEnd();
        glPopMatrix();
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(6.3438330487126, 3.9720460150317);
        glVertex2f(7.2708503539333, 3.2122970376185);
        glVertex2f(6.4205624676638, 1.8305792224306);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(6.3342349411998, 4.615119218384);
        glVertex2f(6.7718037029095, 4.6887012646429);
        glVertex2f(7.5408645871418, 3.9196403804106);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(3.6543604757536, 4.7024344947185);
        glVertex2f(3.2972964937886, 4.6887012646429);
        glVertex2f(2.473302689254, 3.8509742300327);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(6.0462917158182, 5.1526132390963);
        glVertex2f(6.7168707826072, 5.1418978571369);
        glVertex2f(8.0489940999382, 6.4190882541656);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(3.9677216606056, 5.1658877799461);
        glVertex2f(3.3934291043177, 5.1693643172881);
        glVertex2f(2.0338393268356, 6.40535502409);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(6.0714089690551, 5.69122706016);
        glVertex2f(7.0052686141944, 6.6800196256015);
        glVertex2f(6.9778021540432, 8.2044081639906);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(4.1212902983232, 5.6088276797065);
        glVertex2f(3.0226318922771, 6.6800196256015);
        glVertex2f(2.9676989719748, 8.1769417038394);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(4.5332872005905, 5.952158431596);
        glVertex2f(4.2448893690034, 6.1856233428808);
        glVertex2f(4.2448893690034, 6.4602879443923);
        glVertex2f(4.5332872005905, 6.6250867052992);
        glEnd();
        glPopMatrix();
        //
        glPushMatrix();
        glBegin(GL_LINE_STRIP);
        glVertex2f(5.4970687931576, 5.8938406486647);
        glVertex2f(5.8104775976192, 6.1718901128052);
        glVertex2f(5.7555446773169, 6.4877544045435);
        glVertex2f(5.5220797660321, 6.6937528556771);
        glEnd();
        glPopMatrix();
    }
};

