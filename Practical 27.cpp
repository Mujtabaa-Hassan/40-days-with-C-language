// Name = Mujtaba Hassan 
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>

int main(){
	int temp;
	printf("\n Enter Temprature: ");
	scanf("%d", &temp);
	
	if(temp>35){
		printf("\n It is a hot day");
	}
	else if(temp>25&&temp<35){
		printf("\n It is a nice day");
	}
	else if(temp<25){
		printf("\n It is a cold day");
	}
	else{
		printf("\n No comment");
	}
	
	return 0;
}
