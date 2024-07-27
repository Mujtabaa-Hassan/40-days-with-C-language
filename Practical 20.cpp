// Name = Mujtaba Hassan
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	char name[10];
	float percentage;
    printf("Enter Name: ");
    gets(name);
    printf("Enter Percentage:");
    scanf("%f", &percentage);
    
    if(percentage>80){
    	printf("\n Grage is A-1");
	}
	else if(percentage>70){
		printf("\n Grade is A");
	}
	else if(percentage>60){
		printf("\n Grade is B");
	}
	else{
		printf("\n Grade is C");
	}
	return 0;
}
