// Name = Mujtaba Hassan
// Roll Number = 3305
// Group = G-1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	long int cost, tax,item;
	printf("Cost is:");
	scanf("%ld", &cost);
	printf("Item is:");
	scanf("%ld", &item);
	
	if(cost>40000)
	{
		tax=(cost+(cost/5)*100);
		printf("Add tax: %d", tax);
	}
	else
	{
		printf("No tax applied");
	}
	
	return 0;
}

