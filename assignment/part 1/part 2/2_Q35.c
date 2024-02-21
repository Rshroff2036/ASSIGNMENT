//Accept the input month number and print number of days in that month
#include <stdio.h> 
int main()
{
   int monno;    

   printf("Enter Month No : ");  
   scanf("%d",&monno); 
   switch(monno)  
   {
	case 1:
		    printf("january having 31 days\n");
		    break;
	case 3:
			printf("march having 31 days \n");
			break;
	case 5:
			printf("may having 31 days\n");
			break;
	case 7:
			printf("july having 31 days \n");
			break;
	case 8:
			printf("August having 31 days \n");
			break;
	case 10:
			printf("October having 31 days \n");
			break;
	case 12:
	       printf("December having 31 days \n");  
	       break;
	case 2:
	       printf("February having 28 days\n");
		   printf("In leap year february having 29 days\n");    
	       break;
	case 4:
	    	printf("April having 30 days \n");
	    	break;
	case 6:
	    	printf("June having 30 days \n");
	    	break;
	case 9:
		    printf("September having 30 days \n");
		    break;
	case 11:
	        printf("November having 30 days \n");  
	       break;
	default:
	       printf("Invalid Month number \n");  
	       break;
      }
      return 0;
}
