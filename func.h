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
	void print();
	void println();
};