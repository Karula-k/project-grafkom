void *font = GLUT_BITMAP_HELVETICA_12;
void *font2 = GLUT_BITMAP_TIMES_ROMAN_24;
class Printer
{
public:
	void drawText(int x, int y, const char *string) {
		glRasterPos2f(x, y);
		int len = (int)strlen(string);
		for (int i = 0; i < len; i++) {
			glutBitmapCharacter(font2, string[i]);
		}
	}
};
