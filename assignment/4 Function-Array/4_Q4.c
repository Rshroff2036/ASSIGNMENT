//WAP to find factorial using recursion
#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}
	else
	{
		return 1;
	}
}
int main()
{
	int n;
	printf("enter the number for factorial: ");
	scanf("%d",&n);
	printf("factorial: %d",fact(n));
}
