// Name = Mujtaba Hassan
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	long int cost,tax,item;
	printf("Cost is :");
	scanf("%ld", &cost);
	
	if(cost<67){
		item=(cost+(cost/6)*100);
		printf("Tax:%d", item);
	}
	else{
		printf("No tax");
	}
	
	return 0;
}
