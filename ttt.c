#include<stdlib.h>
#include<GL/glut.h>
GLint g[9]={0},flag=1,count=0;

void grid()
{
	glColor3f(1.0,1.0,1.0);
	glBegin(GL_LINES);
	glVertex2f(200.0,600.0);
	glVertex2f(800.0,600.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(200.0,400.0);
	glVertex2f(800.0,400.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(400.0,200.0);
	glVertex2f(400.0,800.0);
	glEnd();
	glBegin(GL_LINES);
	glVertex2f(600.0,200.0);
	glVertex2f(600.0,800.0);
	glEnd();
}

/*void play()
{

GLchar c;
c=key();

}*/


void display()
{
	//GLint i;
	glClear(GL_COLOR_BUFFER_BIT);
	grid();
	glFlush();
	glutSwapBuffers();
	/*for(i=0;i<9;i++)
	{
		//play();
		glFlush();
		if((g[0]==g[1]&&g[1]==g[2]&&g[0]!=0)||(g[3]==g[4]&&g[3]==g[5]&&g[3]!=0)||(g[6]==g[7]&&g[7]==g[8]&&g[8]!=0)||
		(g[0]==g[3]&&g[3]==g[6]&&g[6]!=0)||(g[1]==g[4]&&g[4]==g[7]&&g[7]!=0)||(g[2]==g[5]&&g[5]==g[8]&&g[8]!=0)||
		(g[0]==g[4]&&g[4]==g[8]&&g[8]!=0)||(g[2]==g[4]&&g[4]==g[6]&&g[6]!=0))
		{
			break;
		}
	}*/
}

void myInit()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glColor3f(1.0,1.0,1.0);
	glPointSize(1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void keys(unsigned char key,int x,int y)
{
	GLint d;
	if(key=='0')
		d=0;
	else if(key=='1')
		d=1;
	else if(key=='2')
		d=2;
	else if(key=='3')
		d=3;
	else if(key=='4')
		d=4;
	else if(key=='5')
		d=5;
	else if(key=='6')
		d=6;
	else if(key=='7')
		d=7;
	else if(key=='8')
		d=8;



	if(g[d]==0 && count<=8)
	{
		glColor3f(1.0,0.0,0.0);
		if(key=='0'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,350.0);
			glVertex2f(350.0,350.0);
			glVertex2f(350.0,250.0);
			glVertex2f(250.0,250.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='0'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,350.0);
			glVertex2f(350.0,350.0);
			glVertex2f(300.0,250.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='1'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(450.0,350.0);
			glVertex2f(550.0,350.0);
			glVertex2f(550.0,250.0);
			glVertex2f(450.0,250.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='1'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(450.0,350.0);
			glVertex2f(550.0,350.0);
			glVertex2f(500.0,250.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='2'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,350.0);
			glVertex2f(750.0,350.0);
			glVertex2f(750.0,250.0);
			glVertex2f(650.0,250.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='2'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,350.0);
			glVertex2f(750.0,350.0);
			glVertex2f(700.0,250.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='3'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,550.0);
			glVertex2f(350.0,550.0);
			glVertex2f(350.0,450.0);
			glVertex2f(250.0,450.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='3'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,550.0);
			glVertex2f(350.0,550.0);
			glVertex2f(300.0,450.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='4'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(450.0,550.0);
			glVertex2f(550.0,550.0);
			glVertex2f(550.0,450.0);
			glVertex2f(450.0,450.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='4'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(550.0,550.0);
			glVertex2f(450.0,550.0);
			glVertex2f(500.0,450.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='5'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,550.0);
			glVertex2f(750.0,550.0);
			glVertex2f(750.0,450.0);
			glVertex2f(650.0,450.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='5'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,550.0);
			glVertex2f(750.0,550.0);
			glVertex2f(700.0,450.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='6'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,750.0);
			glVertex2f(350.0,750.0);
			glVertex2f(350.0,650.0);
			glVertex2f(250.0,650.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='6'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(250.0,750.0);
			glVertex2f(350.0,750.0);
			glVertex2f(300.0,650.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='7'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(450.0,750.0);
			glVertex2f(550.0,750.0);
			glVertex2f(550.0,650.0);
			glVertex2f(450.0,650.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='7'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(450.0,750.0);
			glVertex2f(550.0,750.0);
			glVertex2f(500.0,650.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
		else if(key=='8'&&flag==1)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,750.0);
			glVertex2f(750.0,750.0);
			glVertex2f(750.0,650.0);
			glVertex2f(650.0,650.0);
			glEnd();
			g[d]=1;
			flag=2;
		}
		else if(key=='8'&&flag==2)
		{
			glBegin(GL_LINE_LOOP);
			glVertex2f(650.0,750.0);
			glVertex2f(750.0,750.0);
			glVertex2f(700.0,650.0);
			glEnd();
			g[d]=2;
			flag=1;
		}
	count++;
	}
	if((g[0]==g[1]&&g[1]==g[2]&&g[0]!=0)||(g[3]==g[4]&&g[3]==g[5]&&g[3]!=0)||(g[6]==g[7]&&g[7]==g[8]&&g[8]!=0)||
		(g[0]==g[3]&&g[3]==g[6]&&g[6]!=0)||(g[1]==g[4]&&g[4]==g[7]&&g[7]!=0)||(g[2]==g[5]&&g[5]==g[8]&&g[8]!=0)||
		(g[0]==g[4]&&g[4]==g[8]&&g[8]!=0)||(g[2]==g[4]&&g[4]==g[6]&&g[6]!=0))
		{
			count=9;
		}
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(1000,1000);
	glutInitWindowPosition(0,0);
	glutCreateWindow("tic tac toe");
	glutDisplayFunc(display);
	glutKeyboardFunc(keys);
	myInit();
	glutMainLoop();
}



