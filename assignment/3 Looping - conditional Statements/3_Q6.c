//WAP to print Fibonacci series up to given numbers
#include<stdio.h>
int main()
{
	int num,t1=0,t2=1,t3=t1+t2,i;
	printf(" enter the num");
	scanf(" %d",&num);
	printf("\t%d \t%d \t%d",t1,t2,t3);
	for(i=1;i<=num-3;i++)
	{
		t1=t2;
		t2=t3;
		t3=t1+t2;
		printf("\t%d",t3);
	}
	return 0;
}
