//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6)
#include <stdio.h>

  int main() 
  {
        int num, max=0,rem=0;
        printf("Enter the number :");
        scanf("%d",&num);
        
        while(num>0)
	    {
          rem=num%10;
          if(rem>max)
		{
		  max=rem;
        }
          num=num/10;
       }
        printf("max digit of the number is %d\n", max);
        return 0;
   }
