#pragma once

struct vec2f
{
    float x,y;
};

struct vec3f
{
    float x,y,z;
};

struct GameObject
{
	float x,y,z;
	float sx,sy,sz;
};

struct mat4x4
{
    float m[4][4] = { 0 }; // dont forget about init for this thing
};

struct tri
{
    vec3f p[3];
};
