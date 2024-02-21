#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a");
	scanf("\n %d",&a);
	
	printf("\n enter the value of b");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
 printf("\n value of a is %d",a);
 printf("\n value of b is %d",b);
 return 0;
}

