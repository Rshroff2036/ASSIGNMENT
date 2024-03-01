//WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement
#include<stdio.h>
int main()
{
	int num1,num2;
	char choice;
	printf("enter + for addition \n enter - for substraction \n enter * for multiplication \n enter / for division \n enter modulo for modulo");
	printf("\n enter the num1");
	scanf("\n %d",&num1);	
	printf("\n enter the operator");
	scanf(" %c",&choice);
	printf("\n enter the num2");
	scanf("%d",&num2);
	switch(choice)
	{
		case '+':
			printf("addition of %d+%d is %d",num1,num2,num1+num2);
			break;
		case '-':
			printf("substration of %d-%d is %d",num1,num2,num1-num2);
			break;
		case '*':
		    printf("multiplication of %d*%d is %d",num1,num2,num1*num2);
			break;
		case '/':
			if(num2==0)
		    {
			printf("can't divide by 0");
            }
            else
            {
         	printf("division of %d/%d is %d",num1,num2,num1/num2);
	        }
			break;
		case '%':
		    printf("modulo of %d modulo %d is %d",num1,num2,num1%num2);
			break;
		
		default:
		   printf("invalid input");
		   						
	        }
	    return 0;
}
