// Name = Mujtaba Hassan 
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>

int main(){
	double f=1;
	int num,i;
	printf("\n Enter the number to find its factorial: ");
	scanf("%d",&num);
	
	if(num>=0)
	{
		for(i=num; i>1; i--)
		{
			f=f*i;
			printf("\n\n\t\t The factorial of %d is %lf",num,f);
		}
	}
		else
		{
			printf("\n\n\t Sorry!!!");
		}
	
	return 0;
}
