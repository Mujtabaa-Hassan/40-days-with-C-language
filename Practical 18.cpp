// Name = Mujtaba Hassan
// Roll Number = 3305
// Group = G-1
#include<stdio.h>
#include<conio.h>

int main()
{
	int num1 = 200;
	int num2 = 25;
	int c;
	printf("Enter 1 for addition");
	printf("\nEnter 2 for subtraction");
	printf("\nEnter 3 for multiplication");
	printf("\nEnter 4 for division\n");
	printf("\nEnter your number: ");
	scanf("%d",&c);
	
	switch(c){
		case 1:
			printf("\n The addition of two no is %d",num1+num2);
			break;
		case 2:
			printf("\n The subtraction of two no is %d",num1-num2);
			break;
		case 3:
			printf("\n The multiplication of two no is %d",num1*num2);
			break;
		case 4:
			printf("\n The division of two no is %d",num1/num2);
			break;
		default:
			printf("Wrong Number");
	}
	return 0;
}

