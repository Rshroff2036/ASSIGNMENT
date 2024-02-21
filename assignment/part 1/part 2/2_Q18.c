//Write a C program to calculate profit and loss on a transaction.
#include<stdio.h>
int main()
{
	int sp,cp,pnl;
	printf("enter cp : ");
	scanf("%d",&cp);
	printf("enter sp : ");
	scanf("%d",&sp);
	if(cp>sp)
	{
		pnl=cp-sp;
		printf("%d is the total loss",pnl);
	}
	else if(sp>cp)
	{
		pnl=sp-cp;
		printf("%d is the total profit",pnl);
	}
	else
	{
		printf("there is no loss and no profit");
	}
	
	return 0;
}
