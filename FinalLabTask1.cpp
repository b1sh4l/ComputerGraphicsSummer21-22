#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h
#include <math.h>
#define PI 3.14159265358979323846

void display() {
glClearColor(0.0f, 0.0f, 1.0f, 0.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)


glBegin(GL_POLYGON); //Sky
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2f(-1.00f, 0.4f);
glVertex2f(1.00f, 0.4f);
glVertex2f(1.00f, 1.00f);
glVertex2f(-1.00f, 1.00f);
glEnd();

//windmills
glLineWidth(7);
glBegin(GL_LINES);
glColor3f(0.752941f, 0.752941f, 0.752941f);

glVertex2f(0.50f, 0.40f);
glVertex2f(0.50f, 0.70f);

glVertex2f(-0.25f, 0.40f);
glVertex2f(-0.25f, 0.70f);

glVertex2f(-0.65f, 0.40f);
glVertex2f(-0.65f, 0.70f);

glEnd();


glLineWidth(7);
glBegin(GL_LINES);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(0.50f, 0.70f);
glVertex2f(0.47f, 0.60f);

glVertex2f(0.50f, 0.70f);
glVertex2f(0.55f, 0.80f);

glVertex2f(0.50f, 0.70f);
glVertex2f(0.45f, 0.80f);

glVertex2f(-0.25f, 0.70f);
glVertex2f(-0.28f, 0.60f);

glVertex2f(-0.25f, 0.70f);
glVertex2f(-0.30, 0.80f);

glVertex2f(-0.25f, 0.70f);
glVertex2f(-0.20f, 0.80f);

glVertex2f(-0.65f, 0.70f);
glVertex2f(-0.68f, 0.60f);

glVertex2f(-0.65f, 0.70f);
glVertex2f(-0.70f, 0.80f);

glVertex2f(-0.65f, 0.70f);
glVertex2f(-0.60f, 0.80f);

glEnd();


glBegin(GL_POLYGON); //Boat1
glColor3f(0.137255f, 0.556863f, 0.137255f);
glVertex2f(0.45f, 0.2f);
glVertex2f(0.55f, 0.1f);
glVertex2f(0.70f, 0.1f);
glVertex2f(0.80f, 0.2f);
glEnd();

glBegin(GL_POLYGON); //Boat1
glColor3f(0.137255f, 0.556863f, 0.137255f);
glVertex2f(0.45f, 0.2f);
glVertex2f(0.55f, 0.1f);
glVertex2f(0.70f, 0.1f);
glVertex2f(0.80f, 0.2f);
glEnd();

glBegin(GL_POLYGON); //Pyramid1
glColor3f(0.647059f, 0.164706f, 0.164706f);
glVertex2f(-0.70f, 0.4f);
glVertex2f(-0.60f, 0.5f);
glVertex2f(-0.50f, 0.4f);
glEnd();

glBegin(GL_POLYGON); //Pyramid2
glColor3f(0.36f, 0.25f, 0.20f);
glVertex2f(-0.55f, 0.4f);
glVertex2f(-0.40f, 0.57f);
glVertex2f(-0.25f, 0.44f);
glVertex2f(0.10f, 0.48f);
glVertex2f(0.70f, 0.4f);
glEnd();


//Sun
GLfloat x = 0.75f;
GLfloat y = 0.75f;
GLfloat radius = 0.1f;
int i;
int triangleAmount  = 100;
GLfloat twicePi = 2.0f*PI;

glColor3f(1.0f, 1.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x,y); //center of circle
for(i=0; i<=triangleAmount; i++)
{
    glVertex2f(x + (radius * cos( i * twicePi/triangleAmount)),
    y + (radius * sin(i * twicePi/triangleAmount)) );
}

glEnd();

//WMC1
GLfloat x1 = 0.50f;
GLfloat y1 = 0.70f;
GLfloat radius1 = 0.01f;

glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x1,y1); //center of circle
for(i=0; i<=triangleAmount; i++)
{
    glVertex2f(x1 + (radius1 * cos( i * twicePi/triangleAmount)),
    y1 + (radius1 * sin(i * twicePi/triangleAmount)) );
}

glEnd();


//WMC2
GLfloat x2 = -0.25f;
GLfloat y2 = 0.70f;
GLfloat radius2 = 0.01f;

glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x2,y2); //center of circle
for(i=0; i<=triangleAmount; i++)
{
    glVertex2f(x2 + (radius2 * cos( i * twicePi/triangleAmount)),
    y2 + (radius2 * sin(i * twicePi/triangleAmount)) );
}

glEnd();

//WMC3
GLfloat x3 = -0.65f;
GLfloat y3 = 0.70f;
GLfloat radius3 = 0.01f;

glColor3f(0.0f, 0.0f, 0.0f);
glBegin(GL_TRIANGLE_FAN);
glVertex2f(x3,y3); //center of circle
for(i=0; i<=triangleAmount; i++)
{
    glVertex2f(x3 + (radius3 * cos( i * twicePi/triangleAmount)),
    y3 + (radius3 * sin(i * twicePi/triangleAmount)) );
}

glEnd();











glFlush();
}

int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitWindowSize(1920, 1080); // Set the window's initial width & height
glutCreateWindow("Game"); // Create a window with the given title
glutDisplayFunc(display); // Register display callback handler for window re-paint
glutMainLoop(); // Enter the event-processing loop
return 0;
}
