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




//Switzerland Flag
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(0.2f, 0.2f);
glVertex2f(0.5f, 0.2f);
glVertex2f(0.5f, 0.5f);
glVertex2f(0.2f, 0.5f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(0.32f, 0.3f);
glVertex2f(0.36f, 0.3f);
glVertex2f(0.36f, 0.4f);
glVertex2f(0.32f, 0.4f);

glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);

glVertex2f(0.40f, 0.33f);
glVertex2f(0.28f, 0.33f);
glVertex2f(0.28f, 0.37f);
glVertex2f(0.40f, 0.37f);

glEnd();


//Vietnam Flag
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f);
glVertex2f(-0.2f, 0.2f);
glVertex2f(-0.5f, 0.2f);
glVertex2f(-0.5f, 0.4f);
glVertex2f(-0.2f, 0.4f);
glEnd();


//Syria Flag
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 0.0f);
glVertex2f(-0.2f, -0.4f);
glVertex2f(-0.5f, -0.4f);
glVertex2f(-0.5f, -0.467f);
glVertex2f(-0.2f, -0.467f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(-0.5f, -0.333f);
glVertex2f(-0.2f, -0.333f);
glVertex2f(-0.2f, -0.400);
glVertex2f(-0.5f, -0.400f);
glEnd();



//Norway Flag
glBegin(GL_POLYGON);
glColor3f(1.5f, 0.0f, 0.0f);
glVertex2f(0.2f, -0.2f);
glVertex2f(0.5f, -0.2f);
glVertex2f(0.5f, -0.4f);
glVertex2f(0.2f, -0.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.2f, -0.26f);
glVertex2f(0.2f, -0.32f);
glVertex2f(0.5f, -0.32f);
glVertex2f(0.5f, -0.26f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 1.0f);
glVertex2f(0.28f, -0.2f);
glVertex2f(0.34f, -0.2f);
glVertex2f(0.34f, -0.4f);
glVertex2f(0.28f, -0.4f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.2f, -0.28f);
glVertex2f(0.2f, -0.30f);
glVertex2f(0.5f, -0.30f);
glVertex2f(0.5f, -0.28f);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f);
glVertex2f(0.30f, -0.2f);
glVertex2f(0.32f, -0.2f);
glVertex2f(0.32f, -0.4f);
glVertex2f(0.30f, -0.4f);
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
