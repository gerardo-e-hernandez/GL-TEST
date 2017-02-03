#include "Computer Graphics\Computer Graphics\freeglut-3.0.0\include\GL\glut.h"

using namespace std;

void Init()
{
	glClearColor(0.0, 0.0, 0.0, 1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(900, 900);
	glutInitWindowPosition(200, 100);
	glutCreateWindow("Test Program");
	glutDisplayFunc(Init);
	glutMainLoop();

	return 0;

}