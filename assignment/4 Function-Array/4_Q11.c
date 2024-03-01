//WAP to accept 5 numbers from user and display in reverse order using for loop and array
#include<stdio.h>
int main()
{
	int num,rem,rev=0,copy;
	printf("\n enter the number :");
	scanf("\n %d",&num);
	copy=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rem+rev*10;
		num=num/10;
	}
	printf("\n original number is %d and reverse number is %d",copy,rev);
	return 0;
}
