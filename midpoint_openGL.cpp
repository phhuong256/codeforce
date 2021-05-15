#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<GL/glut.h>

int xstart, ystart, xend, yend;

void init()
{
	gluOrtho2D(0, 500, 0, 500);
}



void draw_pixel(int x, int y)
{
	glColor3f(1, 0, 0);
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
	glFlush();
}


void MidPoint(int X1, int Y1, int X2, int Y2)
{
    int dx = X2 - X1;
    int dy = Y2 - Y1;
   
    if(dy<=dx){
    int d = dy - (dx/2);
    int x = X1, y = Y1;
 
    draw_pixel(x, y);
 
    while (x < X2)
    {
        x++;
        if (d < 0)
            d = d + dy;
        else
        {
            d += (dy - dx);
            y++;
        }
 
        draw_pixel(x, y);
    }
    }
   
  else if(dx<dy)
  {
    int d = dx - (dy/2);
    int x = X1, y = Y1;
 
    draw_pixel(x, y);
 
    while (y < Y2)
    {
        y++;
        if (d < 0)
            d = d + dx;
        else
        {
            d += (dx - dy);
            x++;
        }
        draw_pixel(x, y);
    }
  }
}


void Display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glClearColor(0, 0, 0, 1);

	MidPoint(xstart, ystart, xend, yend);
	glEnd();
	glFlush();
}

int main(int argc, char** argv)
{

	printf("Enter 2 points:\n");
	scanf("%d%d%d%d", &xstart, &ystart, &xend, &yend);

	glutInit(&argc, argv);
	glutInitWindowPosition(50, 50);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Bresenham algorithm");
	init();
	glutDisplayFunc(Display);
	glutMainLoop();
}
