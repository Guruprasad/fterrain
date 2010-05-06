#include<GL/glut.h>
#include<stdio.h>
void display(){
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_POINTS);
  glVertex2f(10,10);
  glVertex2f(10,20);
  glVertex2f(20,20);
  glEnd();
}
void keyboard(unsigned char key,int x,int y){
  switch(key){
    case '+':glClear(GL_COLOR_BUFFER_BIT);
	     glBegin(GL_POINTS);
	     glVertex2f(50,10);
	     glVertex2f(50,20);
	     glVertex2f(50,30);
	     glEnd();
	     break;
    case '-':glClear(GL_COLOR_BUFFER_BIT);
	     break;
    default: break;
  }
}
int main(int argc,char **argv){
  glutInit(&argc,argv);
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(500,500);
  glutInitWindowPosition(0,0);
  glutCreateWindow("mesh");
  /*--------initializing colors etc--------*/
  glClearColor(0,0,0,0);
  glColor3f(1,1,1);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluOrtho2D(0,499,0,499);
  /*--------end of initializing colors-----*/
  glutDisplayFunc(display);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}