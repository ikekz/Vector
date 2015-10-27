#include <iostream>
#include "func.h"

using namespace std;

int main(int argc, char* argv[])
{
	//ut << "ss";
	vec4 *v = new vec4(1, 2, 3, 4);
	vec4 *e = new vec4();
	vec4::Normalize(v, e);
	*v = *v * 2;
	v->println();
	e->println();
	system("PAUSE");

	return 0;
}