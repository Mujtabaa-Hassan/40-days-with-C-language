// Name = Mujtaba Hassan
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int income,nodependent;
	printf("Income is: ");
	scanf("%d", &income);
	printf("Number of dependent: ");
	scanf("%d", &nodependent);
	
	if(nodependent>5){
		printf("No income tax");
	}
	else{
		printf("Income tax is applied");
	}
	
	return 0;
}

