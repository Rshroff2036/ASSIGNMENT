//.WAP to find maximum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int n1=50,n2=30,n3=65,maximum;
	maximum = (n1 > n2) ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3);
	printf("largest number is %d %d and %d is %d",n1,n2,n3,maximum);
	
	return 0;
}
