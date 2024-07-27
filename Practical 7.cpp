// Name = Mujtaba Hassan
// Roll No = 3305
// Group = G1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int area, a, v, r,base;
	float height , pi;
	base = 3;
	height = 2.6;
	pi = 3.142;
	r = 3;
	area = 1*(base*height)/2;
	a = (pi*pow(r,2));
	v = 4*pi*pow(r,3)/3;
	printf("\n\n Area of a triangle: %d", area);
	printf("\n\n Area of a circle: %d", a);
	printf("\n\n Volume of a Sphere: %d", v);
	return 0;
}

