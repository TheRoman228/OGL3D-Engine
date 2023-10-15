#pragma once
#include "engine.h"

struct Camera {
	float x,y,z;
	float Xrot,Zrot;
};

Camera getMainCam();
void Camera_Apply();
void Camera_Rotation(float xAngle,float zAngle);
void Camera_AutoMoveByMouse(int centerX,int centerY,float speed);
void Camera_MoveDirection(int forwardMove,int rightMove,int upMove,float speed);