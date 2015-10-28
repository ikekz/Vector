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
	*dst = *scr * (1.0f / scr->Length());
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

vec4 vec4::operator+(vec4 i)
{
	vec4 result(x + i.x, y + i.y, z + i.z, w + i.w);
	return result;
}

float vec4::Length()
{
	return sqrt(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2) + pow(this->w, 2));
}

vec4 vec4::NormalizeInPlace()
{
	vec4 tmp;
	tmp = *this * (1.0f / this->Length());
	return tmp;
}