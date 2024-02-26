//switch case  dynamic calculator
#include<stdio.h>
int main()
{
	int num1,num2;
	int choice;
	printf("\n=========Menu========\n");
	printf("\n enter 1 for Addition \n enter 2 for Substraction \n enter 3 for Multiplication \n enter 4 for Division ");
	printf("\n enter the choice :");
	scanf("\n %d",&choice);
	switch(choice)
	{
		case 1:
	printf("\n enter the num1 :");
	scanf("\n %d",&num1);	
	printf("\n enter the num2 :");
	scanf("%d",&num2);
	printf("Addition : %d",num1+num2);
	break;
		case 2:
    printf("\n enter the num1 :");
	scanf("\n %d",&num1);	
	printf("\n enter the num2 :");
	scanf("%d",&num2);
	printf("Substration : %d",num1-num2);
	break;
		case 3:
	printf("\n enter the num1 :");
	scanf("\n %d",&num1);	
	printf("\n enter the num2 :");
	scanf("%d",&num2);
	printf("Multiplication : %d",num1*num2);
	break;
		case 4:
	printf("\n enter the num1 :");
	scanf("\n %d",&num1);	
	printf("\n enter the num2 :");
	scanf("%d",&num2);
			if(num2==0)
		    {
			printf("can't divide by 0");
            }
            else
            {
     	    printf("Division : %d",num1/num2);
	        }
			break;
		
		    default:
		    printf("Invalid Choice");
		   						
    }
	return 0;
}
