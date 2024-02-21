//Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
int main()
{
	int i,n;
	printf("\n enter the number for multiplication :");
	scanf("\n %d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n  %d*%d is %d",n,i,i*n);
	}
	return 0;
}
