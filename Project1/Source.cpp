////#include "Computer Graphics\Computer Graphics\freeglut-3.0.0\include\GL\glut.h"
//#include "Dependencies\glew-2.0.0\include\GL\glew.h"
//#include "Dependencies\freeglut-3.0.0\include\GL\freeglut.h"
//
//
//
//using namespace std;
//
//void Display(void) {}
////{
////	glClear(GL_COLOR_BUFFER_BIT);
////	glBegin(GL_POLYGON);
////	glVertex2f(0.0, 0.0);
////	glVertex2f(0.5, 0.0);
////	glVertex2f(0.5, 0.5);
////	glVertex2f(0.0, 0.5);
////	glEnd();
////	glFlush();
////}
//
//void Init(void);
//
//int main(int argc, char** argv)
//{
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE| GLUT_RGBA);
//	glutInitWindowSize(500, 500);
//	glutInitWindowPosition(0, 0);
//	glutInitContextVersion(4, 3);
//	glutCreateWindow("Test Program");
//
//
//	glutDisplayFunc(Init);
//	//Initialize();
//	glutMainLoop();
//
//	return 0;
//
//}
//
//void Init(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT);
//	glBegin(GL_POLYGON);
//	//glClearColor(0.0, 0.0, 0.0, 1.0);
//	//glMatrixMode(GL_PROJECTION);
//	//glLoadIdentity();
//	glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//	glEnd();
//	glFlush();
//}