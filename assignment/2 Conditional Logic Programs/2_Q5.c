//Check Number Is Positive or Negative
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number");
	scanf("%d",&number);
	if(number>=0 || number==0)
	{
		printf("entered number is positive",number);
	}
	else
	{
		printf("entered number is negative",number);
	}
	return 0;
	
}
