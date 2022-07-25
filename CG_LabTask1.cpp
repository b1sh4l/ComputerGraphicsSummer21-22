#include <windows.h> // for MS Windows
#include <GL/glut.h> // GLUT, include glu.h and gl.h

void display() {
glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer (background)
glLineWidth(5);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f);

//Screen Divider
glVertex2f(-1.00f, 0.00f);
glVertex2f(1.00f, 0.00f);

glEnd();

glBegin(GL_POLYGON); //Sky
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2f(-1.00f, -0.06f);
glVertex2f(1.00f, -0.06f);
glVertex2f(1.00f, 1.00f);
glVertex2f(-1.00f, 1.00f);
glEnd();


glBegin(GL_POLYGON); //Earth
glColor3f(0.36f, 0.25f, 0.20f);
glVertex2f(-1.00f, 0.01f);
glVertex2f(1.00f, 0.01f);
glVertex2f(1.00f, -1.00f);
glVertex2f(-1.00f, -1.00f);
glEnd();

glBegin(GL_POLYGON);  //Filling 1st gap with blue
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.11f, 0.09f);
glVertex2f(0.13f, 0.09f);
glVertex2f(0.13f, 0.07f);
glVertex2f(0.11f, 0.07f);
glEnd();



//Hexagone
glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 1.0f);
glVertex2f(0.4f, 0.2f);
glVertex2f(0.6f, 0.2f);
glVertex2f(0.7f, 0.4f);
glVertex2f(0.6f, 0.6f);
glVertex2f(0.4f, 0.6f);
glVertex2f(0.3f, 0.4f);
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
