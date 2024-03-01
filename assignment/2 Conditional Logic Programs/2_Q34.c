//Accept month number and display month name
#include <stdio.h> 
int main()
{
   int monno;    

   printf("Enter Month No : ");  
   scanf("%d",&monno); 
   switch(monno)  
   {
	case 1:
		    printf("january\n");
		    break;
	case 3:
			printf("march \n");
			break;
	case 5:
			printf("may\n");
			break;
	case 7:
			printf("july \n");
			break;
	case 8:
			printf("August \n");
			break;
	case 10:
			printf("October \n");
			break;
	case 12:
	       printf("December \n");  
	       break;
	case 2:
	       printf("February \n");    
	       break;
	case 4:
	    	printf("April \n");
	    	break;
	case 6:
	    	printf("June \n");
	    	break;
	case 9:
		    printf("September \n");
		    break;
	case 11:
	        printf("November \n");  
	       break;
	default:
	       printf("Invalid Month number \n");  
	       break;
      }
      return 0;
}
