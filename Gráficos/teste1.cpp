#include <GL/gl.h>
#include <GL/glut.h>

void drawWindow() {
  glClearColor(0.097f, 0.097f, 0.25f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(-0.5f, -0.5f);
        glVertex2f(0.5f, -0.5f);
    glEnd();
   glFlush();
}

int main(int argc, char *argv[]) {
    glutInit(&argc, argv); // Incluido pois o glutCreateWindow precisa dela para funcionar.
    glutCreateWindow("OpenGL - Primitivas de Desenho");
    glutDisplayFunc(drawWindow);
    glutMainLoop();
return 1;
}
