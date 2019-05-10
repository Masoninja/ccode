//mkaplot.cpp
#include <iostream>
#include <cmath>
#include <stdio.h>
#include "GL/glut.h"
#include "GL/gl.h"
using namespace std;
void plot2Dpoint(float x,float y, float red, float green, float blue){
  glColor3f(red, green, blue);
    glVertex2f(x, y);
}

void drawPoints()
{
    int i,j;
    float h,k;
    float red = 1.0,green = 1.0 ,blue = 1.0;
    //glClearColor(red,green,blue,alpha);
    glClearColor(0.4, 0.4, 0.4, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 1.0);
    //void glOrtho(GLdouble left,  GLdouble right,
    //GLdouble bottom,  GLdouble top,
    //GLdouble nearVal,  GLdouble farVal);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    h = -1.0; k = -1.0;
    glPointSize(1.0);
    glBegin(GL_POINTS);// points
    for (i = 0; i <= 800; i++){
      h = (float)(i - 400)/400;
      for( j = 0; j <= 800; j++){
        k = (float)(400 - j)/400;
        //printf("drawpoints  %f %f \n",h,k);
        //cout<<"points "<<h<<" "<<k<<endl;
        plot2Dpoint(h,k,red,green,blue);
        //glFlush();
      }//end i
      red = red - 0.001;
      if (red < 0.1)red = 1;
      green = green - 0.0005;
      if (green < 0.5)green = 1;
      blue = blue - 0.015;
      if (blue < 0.9)blue = 1;
    }//end j
    glEnd();//end points

    glutSwapBuffers();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE);
    glutInitWindowSize(800, 800);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("OpenGL -800x800");
    glutDisplayFunc(drawPoints);
    glutMainLoop();
    return 0;
}
