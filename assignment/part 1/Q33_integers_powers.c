//C Program to Read Integer and Print First Three Powers (N^1, N^2, N^3)
#include<stdio.h>
int main()
{
	int num,p1,p2,p3;
	printf("enter the integer");
	scanf(" %d",&num);
	p1=num;
	p2=num*num;
	p3=num*num*num;
	printf("p1 is %d \n p2 is %d \n p3 is %d",p1,p2,p3);
	return 0; 
}
