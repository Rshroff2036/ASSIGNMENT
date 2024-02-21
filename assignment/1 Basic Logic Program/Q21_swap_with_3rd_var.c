#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n before swap value of a");
	scanf("\n %d",&a);
	printf("\n before swap value of b");
	scanf("\n %d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n after swap value of a is %d",a);
	printf("\n after swap value of b is %d",b);
	
	
	return 0;
}

