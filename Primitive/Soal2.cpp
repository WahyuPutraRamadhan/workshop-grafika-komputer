#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;

void drawPolygone(){
    glBegin(GL_POLYGON);
    glColor3f(1., 1., 0.);
    glVertex2f(100,100);
    glColor3f(1., 0., 0.);
    glVertex2f(100,100);
    glColor3f(0., 0., 1.);
    glVertex2f(100,100);
    glColor3f(0., 1., 0.);
    glVertex2f(200,150);
    glColor3f(1., 0., 1);
    glVertex2f(300,50);
    glEnd;
}
void drawDot (float x, float y){
    glBegin(GL_POLYGON);
    glVertex2f(x,y);
    glEnd();
}
void drawLine(float x1, float y1, float y2, float x2){
    glBegin(GL_POLYGON);
    glVertex2f(y1,x1);
    glVertex2f(y2,x2);
    glEnd;
}

void userdraw(void){
    drawPolygone();
}
void display(void){
      glClear (GL_COLOR_BUFFER_BIT ) ; 
      userdraw () ; 
      glutSwapBuffers () ; 
}   
int main ( int argc , char ** argv ) { 
    glutInit ( & argc , argv ) ; 
    glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB ) ; 
    glutInitWindowPosition ( 100 , 100 ) ; 
    glutInitWindowSize ( 640,480 ) ; 
    glutCreateWindow ( " Test " ) ; 
    glClearColor ( 0.0, 0.0, 0.0, 0.0) ; 
    gluOrtho2D ( -320., 320., -240.0, 240.0) ;
    glutIdleFunc ( display ) ; 
    glutDisplayFunc ( display ) ; 
    glutMainLoop ( ) ;
return 0 ;
}