#include <windows.h>
#include <gl/gl.h>
#include "vectors.h"
#include "ai.h"
#include "camera.h"
#include <cmath>
#include <cstdio>
#include <math.h>
#include <iostream>
#include <string>
#include "globals.h"
#include "stb_easy_font.h"

bool OnTriggerEnter(GameObject rect1,GameObject rect2);
struct Camera getMainCamera();
void DrawPolygon(float x,float y,float z,float sx,float sy,float sz);
void print_string(float x, float y, char *text, float r, float g, float b);
void OpenWindow(HINSTANCE hInstance,HINSTANCE hPrevInstance,LPSTR lpCmdLine,int nCmdShow,LPCSTR title,int w, int h);
void Update();
void Start();
