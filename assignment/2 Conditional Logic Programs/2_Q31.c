//Write a program in C to read any Month Number in integer and display the number of days for this month.
#include <stdio.h> 
int main()
{
   int monno;  
   char monnm[15];  

   printf("Enter Month No : ");  
   scanf("%d",&monno); 
   switch(monno)  
   {
	case 1:
		    printf("january have 31 days\n");
		    break;
	case 3:
			printf("march have 31 days\n");
			break;
	case 5:
			printf("may have 31 days\n");
			break;
	case 7:
			printf("july have 31 days\n");
			break;
	case 8:
			printf("August have 31 days\n");
			break;
	case 10:
			printf("October have 31 days\n");
			break;
	case 12:
	       printf("December have 31 days \n");  
	       break;
	case 2:
	       printf("February have 28 days\n");  
	       printf("in leap year February have 29 days\n");  
	       break;
	case 4:
	    	printf("April have 30 days \n");
	    	break;
	case 6:
	    	printf("June have 30 days \n");
	    	break;
	case 9:
		    printf("September have 30 days \n");
		    break;
	case 11:
	        printf("November have 30 days \n");  
	       break;
	default:9
	       printf("Invalid Month number \n");  
	       break;
      }
      return 0;
}
