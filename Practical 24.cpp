// Name = Mujtaba Hassan 
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>

int main(){
	int a = 5;
	int b = 0;
	int ch;
	printf("Enter number 1 for addition: ");
	printf("\nEnter number 2 for substraction: ");
	printf("\nEnter number 3 for multiplication: ");
	printf("\nEnter your choice: ");
	scanf("%d", &ch);
	
	if(ch==1){
		printf("\n Your answer of a+b is %d", a+b);
	}
	else if(ch==2){
		printf("\n Your answer of a-b is %d", a-b);
	}
	else if(ch==3){
		printf("\n Your answer of a*b is %d", a*b);
	}
	else{
		printf("\n Your enter wrong choice");
	}
	
	return 0;
}

