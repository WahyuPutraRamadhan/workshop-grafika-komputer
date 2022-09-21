#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
typedef struct {
float x;
float y;
} point2D_t;
typedef struct {
float r;
float g;
float b;
} color_t;
void setColor(color_t col){
    glColor3f(col.r, col.g, col.b);
}
void drawPolygon(point2D_t pnt[],int n){
    int i;
    glBegin(GL_LINE_LOOP);
    for (i=0;i<n;i++) {
    glVertex2f(pnt[i].x, pnt[i].y);
    }
    glEnd();
}
void fillPolygon(point2D_t pnt[],int n,color_t color){
    int i;
    setColor(color);
    glBegin(GL_POLYGON);
    for (i=0;i<n;i++) {
    glVertex2f(pnt[i].x, pnt[i].y);
    }
    glEnd();
}
void GradatePolygon(point2D_t pnt[], int n, color_t color)
{
    int i;
    glBegin(GL_POLYGON);
    for (i=0; i<n ;i++) {
    setColor(color);
    glVertex2f(pnt[i].x, pnt[i].y);
    }
    glEnd();
}
void userdraw(){
    point2D_t shape[360];
    double srad,r;
    for(int s=0;s<360;s++)
    { srad=s*3.14/180;
    r=srad;
    shape[s].x=(float)(r*cos(srad));
    shape[s].y=(float)(r*sin(srad));
    }
    drawPolygon(shape,360);
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
    gluOrtho2D ( -10, 10, -10, 10) ;
    glutIdleFunc ( display ) ; 
    glutDisplayFunc ( display ) ; 
    glutMainLoop ( ) ;
return 0 ;
}