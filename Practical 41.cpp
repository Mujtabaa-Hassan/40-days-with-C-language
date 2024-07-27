// Name = Mujtaba Hassan
// Roll No = 3305
// Group = G1

#include<stdio.h>
#include<conio.h>
#include<math.h>

int getmins(void);

int main(void)
{
	int mins1, mins2;
	printf("Type first time (form 3:22): ");
	mins1 = getmins();
	printf("Type second (later) time: ");
	mins2 = getmins();
	printf(" Difference  is %d minutes.", mins2-mins1);
}

int getmins(void)
{
	int hours, minutes;
	scanf("%d:%d",&hours,&minutes);
	return (hours*60 + minutes);
}
