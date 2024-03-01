//WAP of Addition, Subtraction, Multiplication and Division using Switchcase.(Must Be Menu Driven)
#include<stdio.h>
int main()
{
	int num1,num2;
	int choice;
	printf("menu :");
	printf("\n enter 1 for addition \n enter 2 for substraction \n enter 3 for multiplication \n enter 4 for division");
	printf("\n enter the operator: ");
	scanf(" %d",&choice);
	printf("\n enter the num1: ");
	scanf("\n %d",&num1);	
	printf("\n enter the num2: ");
	scanf("%d",&num2);
	switch(choice)
	{
		case 1:
			printf("\naddition of %d+%d is %d",num1,num2,num1+num2);
			break;
		case 2:
			printf("\nsubstration of %d-%d is %d",num1,num2,num1-num2);
			break;
		case 3:
		    printf("\nmultiplication of %d*%d is %d",num1,num2,num1*num2);
			break;
		case 4:
			if(num2==0)
		    {
			printf("\ncan't divide by 0");
}
     else
     {
     	printf("\ndivision of %d/%d is %d",num1,num2,num1/num2);
	 }
			break;
		
		default:
		   printf("\ninvalid input");
		   						
	}
	return 0;
}
