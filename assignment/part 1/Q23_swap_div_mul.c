//WAP to calculate swap 2 numbers with using of multiplication and division
#include<stdio.h>
int main()
{
	int a,b;
	printf("\n before swap value of a");
	scanf("\n %d",&a);
	printf("\n before swap value of b");
	scanf("\n %d",&b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n after swap value of a is %d",a);
	printf("\n after swap value of b is %d",b);
	
	
	return 0;
}
