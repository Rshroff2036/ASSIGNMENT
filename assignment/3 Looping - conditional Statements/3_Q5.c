//WAP to print factorial of given number
#include<stdio.h>
int main()
{
	int num,i,fac=1;
	printf("\n enter the number");
	scanf("\n %d",&num);
	for(i=1;i<=num;i++)
	{
		fac=fac*i;
	}
	printf("\n factorical of number is %d",fac);
	
	return 0;
	
}
