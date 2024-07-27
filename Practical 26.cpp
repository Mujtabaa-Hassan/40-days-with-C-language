// Name = Mujtaba Hassan 
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>

int main(){
	int x,y,z;
	printf("Enter x: ");
	scanf("%d", &x);
	printf("Enter y: ");
	scanf("%d", &y);
	printf("Enter z: ");
	scanf("%d", &z);
	
	if(x>y&&x>z){
		printf("The largest number is x");
	}
	else if(y>x&&y>z){
		printf("The largest number is y");
	}
	else{
		printf("The largest number is z");
	}
	
	return 0;	
}

