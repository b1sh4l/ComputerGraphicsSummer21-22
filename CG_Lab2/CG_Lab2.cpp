#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
glClearColor(0.75f, 0.75f, 0.75f, 10.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(2);
glBegin(GL_LINES);
glColor3f(0.0f, 1.0f, 0.0f);

glVertex2f(0.0f, -600.0f);
glVertex2f(0.0f, 600.0f);

glVertex2f(-540.0f, 0.0f);
glVertex2f(540.0f, 0.0f);

glEnd();




//Hexagone
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f);
glVertex2f(0.4f, 0.2f);
glVertex2f(0.6f, 0.2f);
glVertex2f(0.7f, 0.4f);
glVertex2f(0.6f, 0.6f);
glVertex2f(0.4f, 0.6f);
glVertex2f(0.3f, 0.4f);
glEnd();


//Triangle
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.3f, 0.2f);
glVertex2f(-0.7f, 0.2f);
glVertex2f(-0.5f, 0.5f);
glEnd();


//Rectangle
glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 0.0f);
glVertex2f(-0.3f, -0.2f);
glVertex2f(-0.6f, -0.2f);
glVertex2f(-0.6f, -0.5f);
glVertex2f(-0.3f, -0.5f);
glEnd();

//Triangle
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.5f, 0.0f);
glVertex2f(0.3f, -0.5f);
glVertex2f(0.5f, -0.5f);
glVertex2f(0.4f, -0.2f);
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
