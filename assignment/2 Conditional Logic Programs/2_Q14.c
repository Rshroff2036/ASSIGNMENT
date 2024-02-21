//WAP to find the largest of three numbers
#include<stdio.h>
int main()
{
	int n1,n2,n3;

	printf("enter three number : ");
	scanf("%d %d %d",&n1,&n2,&n3);
	if(n1>n2&&n1>n3)
	{
		printf("%d is greater than other two numbers");
	}
	else if(n2>n3&&n2>n1)
	{
		printf("%d is greater than other two numbers");
	}
	else
	{
		printf("%d is greater than other two numbers");
	}
	
	return 0;
}
