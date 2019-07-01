//*Header Inclusions */
#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h> // Include the freeglut header file

using namespace std;

/* Set Title */
char title[] = "Voight Bench";

/* Initialize OpenGL Parameters */
void initGL() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
   glClearDepth(1.0f);                   // Set background depth to farthest
   glEnable(GL_DEPTH_TEST);   // Enable depth testing for z-culling
   glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
   glShadeModel(GL_SMOOTH);   // Enable smooth shading
   glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);  // Nice perspective corrections
}

void display() {
   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT); // Clear color and depth buffers
   glMatrixMode(GL_MODELVIEW);     // To operate on model-view matrix

   // pyramid consists of 4 triangles
   glLoadIdentity();                 // Reset the model-view matrix
   glTranslatef(1.5f, 0.0f, -7.0f);  // Move right and into the screen

   // pyramid consists of 4 triangles
   glLoadIdentity();                  // Reset the model-view matrix
   glTranslatef(-1.5f, 0.0f, -6.0f);  // Move left and into the screen

	/*Creates the Cushion*/
	glBegin(GL_QUADS);				// Starting delimiter for Triangle primitive

	// Set Front face color (black) and vertex coordinates
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 2.0f, 1.0f);
	glVertex3f(-3.0f, 1.75f, 1.0f);
	glVertex3f(3.0f, 1.75f, 1.0f);
	glVertex3f(3.0f, 2.0f, 1.0f);

	// Set Right face color (black) and vertex coordinates
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 2.0f, -1.0f);
	glVertex3f(3.0f, 2.0f, 1.0f);
	glVertex3f(3.0f, 1.75f, 1.0f);
	glVertex3f(3.0f, 1.75f, -1.0f);

	// Set Left face color (black) and vertex coordinates
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 2.0f, 1.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 1.75f, -1.0f);
	glVertex3f(-3.0f, 1.75f, 1.0f);

	// Set Top face color (black) and vertex coordinates
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 2.0f, 1.0f);
	glVertex3f(3.0f, 2.0f, 1.0f);
	glVertex3f(3.0f, 2.0f, -1.0f);

	// Set back face color (black) and vertex coordinates
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 2.0f, -1.0f);
	glVertex3f(-3.0f, 1.75f, -1.0f);
	glVertex3f(3.0f, 1.75f, -1.0f);

	// Set bottom face color (black) and vertex coordinates
	glColor3f(0.0, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, 1.0f);
	glVertex3f(3.0f, 1.75f, -1.0f);
	glVertex3f(-3.0f, 1.75f, -1.0f);
	glVertex3f(-3.0f, 1.75f, 1.0f);

	/*Creates the Left Front leg*/
	glBegin(GL_QUADS);				// Starting delimiter for Triangle primitive

	// Set Front face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, 1.0f);
	glVertex3f(-2.8f, 1.75f, 1.0f);
	glVertex3f(-2.8f, -.5f, .8f);
	glVertex3f(-3.0f, -.5f, .8f);

	// Set Right face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.f, 1.75f, 1.0);
	glVertex3f(-3.0f, 1.75f, .8f);
	glVertex3f(-3.0f, -.5f, 1.0f);
	glVertex3f(-3.0f, -.5f, .8f);

	// Set Left face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, 1.0f);
	glVertex3f(-3.0f, 1.75f, .8f);
	glVertex3f(-3.0f, -.5f, .8f);
	glVertex3f(-3.0f, -.5f, 1.0f);

	// Set Top face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, 1.0);
	glVertex3f(-3.0f, 1.75f, .8f);
	glVertex3f(-2.8f, 1.75f, .8f);
	glVertex3f(-2.8f, 1.75f, 1.0f);

	// Set back face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-2.8f, 1.75f, .8f);
	glVertex3f(-3.0f, 1.75f, .8f);
	glVertex3f(-3.0f, -.5f, .8f);
	glVertex3f(-2.8f, -.5f, .8f);

	// Set bottom face color (brown) and vertex coordinates
	glColor3f(0.1, 0.0f, 0.0f);
	glVertex3f(-2.8f, -.5f, 1.0f);
	glVertex3f(-2.8f, -.5f, .8f);
	glVertex3f(-3.0f, -.5f, .8f);
	glVertex3f(-3.0f, -.5f, 1.0f);

	/*Creates the Left Back leg*/
	glBegin(GL_QUADS);				// Starting delimiter for Triangle primitive

	// Set Front face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, -1.0f);
	glVertex3f(-2.8f, 1.75f, -1.0f);
	glVertex3f(-2.8f, -.5f, -.8f);
	glVertex3f(-3.0f, -.5f, -.8f);

	// Set Right face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.f, 1.75f, -1.0);
	glVertex3f(-3.0f, 1.75f, -.8f);
	glVertex3f(-3.0f, -.5f, -1.0f);
	glVertex3f(-3.0f, -.5f, -.8f);

	// Set Left face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, -1.0f);
	glVertex3f(-3.0f, 1.75f, -.8f);
	glVertex3f(-3.0f, -.5f, -.8f);
	glVertex3f(-3.0f, -.5f, -1.0f);

	// Set Top face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 1.75f, -1.0);
	glVertex3f(-3.0f, 1.75f, -.8f);
	glVertex3f(-2.8f, 1.75f, -.8f);
	glVertex3f(-2.8f, 1.75f, -1.0f);

	// Set back face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(-2.8f, 1.75f, -.8f);
	glVertex3f(-3.0f, 1.75f, -.8f);
	glVertex3f(-3.0f, -.5f, -.8f);
	glVertex3f(-2.8f, -.5f, -.8f);

	// Set bottom face color (brown) and vertex coordinates
	glColor3f(0.1, 0.0f, 0.0f);
	glVertex3f(-2.8f, -.5f, -1.0f);
	glVertex3f(-2.8f, -.5f, -.8f);
	glVertex3f(-3.0f, -.5f, -.8f);
	glVertex3f(-3.0f, -.5f, -1.0f);

	/*Creates the Right Front leg*/
	glBegin(GL_QUADS);				// Starting delimiter for Triangle primitive

	// Set Front face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, 1.0f);
	glVertex3f(2.8f, 1.75f, 1.0f);
	glVertex3f(2.8f, -.5f, .8f);
	glVertex3f(3.0f, -.5f, .8f);

	// Set Right face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.f, 1.75f, 1.0);
	glVertex3f(3.0f, 1.75f, .8f);
	glVertex3f(3.0f, -.5f, 1.0f);
	glVertex3f(3.0f, -.5f, .8f);

	// Set Left face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, 1.0f);
	glVertex3f(3.0f, 1.75f, .8f);
	glVertex3f(3.0f, -.5f, .8f);
	glVertex3f(3.0f, -.5f, 1.0f);

	// Set Top face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, 1.0);
	glVertex3f(3.0f, 1.75f, .8f);
	glVertex3f(2.8f, 1.75f, .8f);
	glVertex3f(2.8f, 1.75f, 1.0f);

	// Set back face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(2.8f, 1.75f, .8f);
	glVertex3f(3.0f, 1.75f, .8f);
	glVertex3f(3.0f, -.5f, .8f);
	glVertex3f(2.8f, -.5f, .8f);

	// Set bottom face color (brown) and vertex coordinates
	glColor3f(0.1, 0.0f, 0.0f);
	glVertex3f(2.8f, -.5f, 1.0f);
	glVertex3f(2.8f, -.5f, .8f);
	glVertex3f(3.0f, -.5f, .8f);
	glVertex3f(3.0f, -.5f, 1.0f);

	/*Creates the Right Back leg*/
	glBegin(GL_QUADS);				// Starting delimiter for Triangle primitive

	// Set Front face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, -1.0f);
	glVertex3f(2.8f, 1.75f, -1.0f);
	glVertex3f(2.8f, -.5f, -.8f);
	glVertex3f(3.0f, -.5f, -.8f);

	// Set Right face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.f, 1.75f, -1.0);
	glVertex3f(3.0f, 1.75f, -.8f);
	glVertex3f(3.0f, -.5f, -1.0f);
	glVertex3f(3.0f, -.5f, -.8f);

	// Set Left face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, -1.0f);
	glVertex3f(3.0f, 1.75f, -.8f);
	glVertex3f(3.0f, -.5f, -.8f);
	glVertex3f(3.0f, -.5f, -1.0f);

	// Set Top face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(3.0f, 1.75f, -1.0);
	glVertex3f(3.0f, 1.75f, -.8f);
	glVertex3f(2.8f, 1.75f, -.8f);
	glVertex3f(2.8f, 1.75f, -1.0f);

	// Set back face color (brown) and vertex coordinates
	glColor3f(0.1f, 0.0f, 0.0f);
	glVertex3f(2.8f, 1.75f, -.8f);
	glVertex3f(3.0f, 1.75f, -.8f);
	glVertex3f(3.0f, -.5f, -.8f);
	glVertex3f(2.8f, -.5f, -.8f);

	// Set bottom face color (brown) and vertex coordinates
	glColor3f(0.1, 0.0f, 0.0f);
	glVertex3f(2.8f, -.5f, -1.0f);
	glVertex3f(2.8f, -.5f, -.8f);
	glVertex3f(3.0f, -.5f, -.8f);
	glVertex3f(3.0f, -.5f, -1.0f);

	glEnd();					// Ending the delimiter for triangle primitive

	glutSwapBuffers();// Swap front and back frame buffers (similar to glFlush)
}
void reshape(GLsizei width, GLsizei height) {

	if (height == 0)
		height = 1;
	GLfloat aspect = (GLfloat) width / (GLfloat) height;

	glViewport(0, 0, width, height);

	//Set the aspect ratio of the clipping volume to match the viewport
	glMatrixMode(GL_PROJECTION);	// Create a Projection matrix
	glLoadIdentity();				// Reset Projection Matrix
	// Set perspective projection, fov, aspect, ZNear and zFar clipping
	gluPerspective(75.0f, aspect, 0.8f, 100.0f);
}
/* Main function required for Immediate mode */
int main(int argc, char** argv) {
	glutInit(&argc, argv);						// Initializes the freeglut library
	glutCreateWindow("Kyle Bench");		// Create a window and title
	glutInitWindowSize(1280, 720);				// Specifies the window's width and height
	glutInitWindowPosition(0,0);				// Specifies the position of the window's top-left corner
	glutDisplayFunc(displayGraphics);			// Sets the display callback for the current windo
	glutMainLoop();								// Enters the GLUT event processing loop.
	return 0;									// Exits main function
}
