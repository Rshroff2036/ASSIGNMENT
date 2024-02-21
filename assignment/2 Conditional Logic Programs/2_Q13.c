//WAP to find minimum number among 3 numbers using ternary operator
#include<stdio.h>
int main()
{
	int n1=25,n2=87,n3=14,minimum;
	minimum=(n1<n2)?(n1<n3?n1:n3):(n2<n3?n2:n3);
	printf("minimum number is %d %d and %d is %d",n1,n2,n3,minimum);
	return 0;
}
