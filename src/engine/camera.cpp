#include "camera.h"

struct Camera cam = {0,0,1.7f,0,0};

Camera getMainCam()
{
	return cam;
}

void Camera_Apply()
{
	glRotatef(-cam.Xrot,1,0,0);
	glRotatef(-cam.Zrot,0,0,1);
	glTranslatef(-cam.x,-cam.y,-cam.z);
}

void Camera_Rotation(float xAngle,float zAngle)
{
	cam.Zrot += zAngle;
	if(cam.Zrot < 0) cam.Zrot += 360;
	if(cam.Zrot>360) cam.Zrot -= 360;
	cam.Xrot += xAngle;
	if(cam.Xrot < 0) cam.Xrot += 360;
	if(cam.Xrot>360) cam.Xrot -= 360;
}

void Camera_AutoMoveByMouse(int centerX,int centerY,float speed)
{
	POINT cur;
	POINT base = {centerX,centerY};
	GetCursorPos(&cur);
	Camera_Rotation( (base.y - cur.y) / 5.0,(base.x - cur.x) / 5.0 );
	SetCursorPos(base.x,base.y);
}

void Camera_MoveDirection(int forwardMove,int rightMove,int upMove,float speed)
{
	float ugol = -cam.Zrot / 180 * M_PI;
	
	if(forwardMove > 0)
		ugol += rightMove > 0 ? M_PI_4 : (rightMove < 0 ? -M_PI_4 : 0);
	if(forwardMove < 0)
		ugol += M_PI + (rightMove > 0 ? -M_PI_4 : (rightMove < 0 ? M_PI_4 : 0));
	if(forwardMove == 0)
	{
		ugol += rightMove > 0 ? M_PI_2 : -M_PI_2;
		if (rightMove == 0) speed = 0;
	}
	if(speed != 0)
	{
		cam.x += sin(ugol) * speed;
		cam.y += cos(ugol) * speed;
	}
	if(upMove > 0)
	{
		cam.z += 0.01f;
	}
	if(upMove < 0)
	{
		cam.z -= 0.01f;
	}
}