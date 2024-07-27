// Name = Mujtaba Hassan 
// Roll Number = 3305
// Group = G-1
#include<stdio.h>
#include<conio.h>

int main(){
	 int ch;
	 printf("Enter 1");
	 printf("\nEnter 2");
	 printf("\nEnter 3");
	 printf("\nEnter 4\n");
	 printf("\nEnter your choice: ");
	 scanf("%d", &ch);
	 
	 switch(ch){ 	
	 	case 1:{
            printf("\nONE");
			break;	 		
			}		 
	    case 2:{
	    	printf("\nTWO");
			break;
		}	
		case 3:{
	    	printf("\nTHREE");
			break;
		}	
		case 4:{
	    	printf("\nFOUR");
			break;
		}	
		default:{
	    	printf("\nWRONG CHOICE");
			break;
		}
	}	
	return 0;
}

