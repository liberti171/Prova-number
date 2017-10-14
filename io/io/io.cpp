// io.cpp : Defines the entry point for the console application.

#include "stdafx.h"
#include <stdlib.h>
#include <stdio.h>
#include <string> 
#include <vector>
using namespace std;

struct vec4f {
	float x, y, z, w;
	vec4f(float xx, float yy, float zz, float ww) : x(xx), y(yy), z(zz), w(ww) { auto i = 0; }
};

inline vec4f operaor(const vec4f a, const vec4f b) { /// inline ci permette di definire funzioni
	
	return { a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w };  //con const so che non mi verrà mai dato un valore nullptr
	
}

vec4f f_const_ptr(const vec4f*v) {
	return* v;
}





int main(int argc, char** argv)
{
	/*//ciao ora ti faccio vedere
	auto a = 10;
	printf("a %d", a);
	//in questo caso possiamo sommarllo 10 volte
	for (int hh = 0; hh < 10; hh++) 		a += 1;
	system("PAUSE");
	//HO VISCTO TUTTO IO!!!
	//ciao
	return 0;
	*/
	auto a1 =  vec4f ( 0,0,0,0 );

	a1.w = 1;
	auto  a2 = vec4f ( 11,1,1,1 );
	auto* p1 = &a1;
	printf("%s", p1);
	vec4f atot= operaor(a1, a2);
	printf("%f %f %f %f", atot.x, atot.y,  atot.w,   atot.z);
	
	
	}







