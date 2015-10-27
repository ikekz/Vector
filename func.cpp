#include <iostream>
#include "func.h"

using namespace std;

vec4::vec4(float dx, float dy, float dz, float dw)
{
	x = dx;
	y = dy;
	z = dz;
	w = dw;
}

void vec4::Normalize(vec4* scr, vec4* dst)
{
	float inv_length = 1.0f / (sqrt(pow(scr->x, 2) + pow(scr->y, 2) + pow(scr->z, 2) + pow(scr->w, 2)));
	*dst = *scr * inv_length;
}

void vec4::print()
{
	cout << '(' << x << ' ' << y << ' ' << z << ' ' << w << ')';
}

void vec4::println()
{
	vec4::print();
	cout << endl;
}

vec4 vec4::operator*(float i)
{
	vec4 result;
	result.x = x * i;
	result.y = y * i;
	result.z = z * i;
	result.w = w * i;
	return result;
}

void vec4::Normalize()
{
	float inv_length = 1.0f / (sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2) + pow(w, 2)));
	//vec4 = vec4 * inv_length;
	//dodelat'
}