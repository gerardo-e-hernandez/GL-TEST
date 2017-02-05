#include "Dependencies\glew-2.0.0\include\GL\glew.h"
#include "Dependencies\freeglut-3.0.0\include\GL\freeglut.h"
#include <iostream>

using namespace std;

//#include "vgl.h"
//#include "LoadShaders.h"

#define BUFFER_OFFSET(offset) ((void *)(offset)) 

void init(void);

void Display(void);

enum VAO_IDs {Triangles, NumVAOs =2 };
enum Buffer_IDs { ArrayBuffer, NumBuffers =2 };
enum Attrib_IDs {vPosition = 0 };

GLuint VAOs[NumVAOs];
GLuint Buffers[NumBuffers];

const GLuint NumVertices = 9;


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGBA);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(600, 200);
	glutInitContextVersion(4, 3);
	glutInitContextProfile(GLUT_CORE_PROFILE);
	glutCreateWindow("Test Window");

	if (glewInit())
	{
		cerr << "Unable to initialize GLEW ... exiting" << endl;
	}
	init();

	glutDisplayFunc(Display);

	glutMainLoop();

}

void init(void)
{
	glGenVertexArrays(NumVAOs, VAOs);
	glBindVertexArray(VAOs[Triangles]);

	//GLfloat vertices[NumVertices][2] = {
	//	{ -0.90, -0.90 },   //Triangle 1
	//	{  0.85, -0.90 },
	//	{ -0.90,  0.85 },
	//	{  0.90, -0.85 },   //Triangle 2
	//	{  0.90,  0.90 },
	//	{ -0.85,  0.90 }
	//};

	GLfloat vertices[NumVertices][3] = {
		{ -0.90, -0.90 },   //Triangle 1
		{ 0.85, -0.90 },
		{ -0.90,  0.85 },
		{ 0.90, -0.85 },   //Triangle 2
		{ 0.90,  0.85 },
		{ 0.05,  0.0 },
		{ -0.85,  0.90 },   //Triangle 3
		{ 0.85, 0.90 },   
		{ 0.0,  0.05 }
	};

	glGenBuffers(NumBuffers, Buffers);
	glBindBuffer(GL_ARRAY_BUFFER, Buffers[ArrayBuffer]);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices),
		vertices, GL_STATIC_DRAW);

	/*ShaderInfo shaders[] = {
		{GL_VERTEX_SHADER, "triangles.vert"},
		{GL_FRAGMENT_SHADER, "triangels.frag"},
		{GL_NONE, NULL}
	};

	GLuint program = LoadShaders(shaders);
	glUseProgram(program);*/

	glVertexAttribPointer(vPosition, 3, GL_FLOAT,
		GL_FALSE, 0, BUFFER_OFFSET(0));
	glEnableVertexAttribArray(vPosition);
	//glClearColor(0, 0, 1, 1);


}

void Display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBindVertexArray(VAOs[Triangles]);
	glDrawArrays(GL_TRIANGLES, 0, NumVertices);

	glFlush();


}