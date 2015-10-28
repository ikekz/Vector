#pragma once
#include <iostream>

struct vec4
{
	float x, y, z, w;
	vec4(float dx = 0, float dy = 0, float dz = 0, float dw = 0);
	static void Normalize(vec4* scr, vec4* dst);
	vec4 NormalizeInPlace();
	float Length();
	vec4 operator*(float i);
	vec4 operator*(vec4 i);
	vec4 operator+(vec4 i);
	vec4 operator-(vec4 i);
	static float Dot(vec4 scr1, vec4 scr2);
	void print();
	void println();
};

struct mat4
{
	float x1, y1, z1, w1, x2, y2, z2, w2, x3, y3, z3, w3, x4, y4, z4, w4;
};