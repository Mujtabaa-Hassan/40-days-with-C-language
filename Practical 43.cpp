// Name = Mujtaba Hassan
// Roll No = 3305
// Group = G1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int sumsqr(int, int);
int sqr(int);
int sum(int, int);

int main(void)
{
	int num1,num2;
	printf("Type two numbers: ");
	scanf("%d, %d", &num1, &num2);
	printf("Sum of the squares is %d",sumsqr(num1,num2));
}

int sumsqr(int j, int k)
{
	return( sum(sqr(j),sqr(k) ) );
}

int sqr(int z)
{
	return(z*z);
}

int sum(int x, int y)
{
	return(x+y);
}
