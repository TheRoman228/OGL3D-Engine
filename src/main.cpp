#include "engine/engine.h"

int WINAPI WinMain(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow) {OpenWindow(hInstance,hPrevInstance,lpCmdLine,nCmdShow,"Debug Text Test",1024,512);return 0;}
GameObject polygon;
GameObject cameraa;
struct Camera camera;
// Use for initializion
void Start()
{
	camera = getMainCamera();
	polygon.x = 0; polygon.y = 0; polygon.z = 0;
	polygon.sx= 1;polygon.sy = 1;polygon.sz = 0;
	cameraa.x = camera.x; cameraa.y = camera.y; cameraa.z = camera.z;
	cameraa.sx = 1; cameraa.sy = 1; cameraa.sz = 1;
}

void DrawPolygon()
{
    glBegin(GL_TRIANGLES);
        glColor3f(1,0,0); glVertex3f(1.0f,1.0f,0.0f);
        glColor3f(1,0,0); glVertex3f(0.0f,1.0f,0.0f);
        glColor3f(1,0,0); glVertex3f(0.0f,0.0f,0.0f);
        glColor3f(0,0,1); glVertex3f(0.0f,0.0f,0.0f);
        glColor3f(0,0,1); glVertex3f(1.0f,0.0f,0.0f);
        glColor3f(0,0,1); glVertex3f(1.0f,1.0f,0.0f);
    glEnd();
	
}

void drawline(int x, int y, int x1, int y1)
{
    glBegin(GL_LINES);
	glColor3f(1,1,1);glVertex3f(x,y,2); glVertex3f(x1,y1,2);
    glEnd();
}

void renderText(char *text, float x, float y)
{
	glMatrixMode(GL_PROJECTION);
	glPushMatrix();
	glLoadIdentity();
	glOrtho(0, 1024, 0, 512, -1, 1);

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glLoadIdentity();

	//void print_string(float x, float y, char *text, float r, float g, float b)
	glScalef(5,-1,5);
	print_string(x,y,text,1,1,1);

	glPopMatrix();
	glMatrixMode(GL_PROJECTION);
	glPopMatrix();

	glMatrixMode(GL_MODELVIEW);
}

// Use for update
void Update()
{
	renderText("?Hello?",0,0);
	DrawPolygon();
}
