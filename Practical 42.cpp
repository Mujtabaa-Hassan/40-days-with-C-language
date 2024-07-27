// Name = Mujtaba Hassan
// Roll No = 3305
// Group = G1

#include<stdio.h>
#include<conio.h>
#include<math.h>

float area(float);

int main(void)
{
	float radius;
	printf("\nEnter radius of sphere: ");
	scanf("%f",&radius);
	printf("\nArea of sphere is %.2f", area(radius));
}

float area(float rad)
{
	return(4*3.14159*rad*rad);
}
