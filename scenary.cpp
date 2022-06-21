#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846

void display() {
glClearColor(0.75f, 0.75f, 0.75f, 10.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(2);
/*glBegin(GL_LINES);
glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.0f, -600.0f);
glVertex2f(0.0f, 600.0f);

glVertex2f(-540.0f, 0.0f);
glVertex2f(540.0f, 0.0f);

glEnd();*/

//Sky
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.5f, 1.0f);
glVertex2f(-600.0f, 540.0f);
glVertex2f(-600.0f, -540.0f);
glVertex2f(600.0f, -540.0f);
glVertex2f(600.0f, 540.0f);
glEnd();

//Ground
glBegin(GL_POLYGON);
glColor3f(0.34f, 1.40f, 0.34f);
glVertex2f(-1.0f, -0.1f);
glVertex2f(1.0f, -0.1f);
glVertex2f(1.0f, -1.0f);
glVertex2f(-1.0f, -1.0f);
glEnd();

int i;

	GLfloat x=-0.7f; GLfloat y=0.3f; GLfloat radius =0.05f;
	int triangleAmount = 100; //# of lines used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
	glColor3f(1.0f, 1.0f, 0.0f);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f( x + (radius * cos(i *  twicePi / triangleAmount)),
                        y + (radius * sin(i * twicePi / triangleAmount)) );
		}
	glEnd();

//Mountain 1
glBegin(GL_POLYGON);
glColor3f(0.101f, 0.067f, 0.033f);
glVertex2f(0.0f, -0.1f);
glVertex2f(1.0f, -0.1f);
glVertex2f(0.391f, 0.504f);
glEnd();

//Mountain 2
glBegin(GL_POLYGON);
glColor3f(0.101f, 0.0f, 0.033f);
glVertex2f(0.0f, -0.1f);
glVertex2f(-1.0f, -0.1f);
glVertex2f(-0.39f, 0.5f);
glEnd();




//Tree
glBegin(GL_POLYGON);
glColor3f(0.101f, 0.0f, 0.033f);
glVertex2f(-0.6f, -0.7f);
glVertex2f(-0.55f, -0.7f);
glVertex2f(-0.55f, -0.5f);
glVertex2f(-0.6f, -0.5f);
glEnd();

//TreeLeaves
glBegin(GL_POLYGON);
glColor3f(0.01f, 0.150f, 0.0f);
glVertex2f(-0.7f, -0.5f);
glVertex2f(-0.45f, -0.5f);
glVertex2f(-0.57f, -0.43f);
/*glVertex2f(-0.64f, -0.5f);
glVertex2f(-0.61f, -0.48f);
glVertex2f(-0.63, -0.47f);
glVertex2f(-0.65, -0.45f);
glVertex2f(-0.64f, -0.46f);
glVertex2f(-0.57f, -0.43f);*/
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.01f, 0.150f, 0.0f);
glVertex2f(-0.7f, -0.46f);
glVertex2f(-0.45f, -0.46f);
glVertex2f(-0.57f, -0.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.01f, 0.150f, 0.0f);
glVertex2f(-0.7f, -0.43f);
glVertex2f(-0.45f, -0.43f);
glVertex2f(-0.57f, -0.37f);
glEnd();

//House
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(-0.3f, -0.7f);
glVertex2f(0.1f, -0.7f);
glVertex2f(0.1f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.101f, 0.0f, 0.033f);
glVertex2f(-0.2f, -0.7f);
glVertex2f(0.0f, -0.7f);
glVertex2f(0.0f, -0.6f);
glVertex2f(-0.2f, -0.6f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.101f, 0.0f, 0.033f);
glVertex2f(-0.2f, -0.45f);
glVertex2f(0.0f, -0.45f);
glVertex2f(0.11f, -0.5f);
glVertex2f(-0.31f, -0.5f);
glEnd();





glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(1080, 1200); // Set the window's initial width & height
glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
