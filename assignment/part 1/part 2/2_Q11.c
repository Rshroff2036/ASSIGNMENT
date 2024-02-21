//.WAP to find number is even or odd using ternary operator
#include<stdio.h>
int main()
{
	int number;
	printf("enter the number : ");
	scanf("%d",&number);
	(number%2==0)?
	printf("number is even"):printf("number is odd");
	
	return 0;
}
