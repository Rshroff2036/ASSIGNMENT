//WAP to check whether a number is negative, positive or zero
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number : ");
	scanf("%d",&number);
	if(number>0)
	{
		printf("entered number is positive",number);
	}
	else if(number<0)
	{
		printf("entered number is negative",number);
	}
	else
	{
		printf("entered number is zero",number);
	}
	return 0;
}
