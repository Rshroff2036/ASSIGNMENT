//WAP to perform Palindrome number using for loop and function
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
	if(rev!=copy)
	{
		printf("\n entered number is not palindrome number ",rev);
		
	}
	else
	{
		printf("\n palindrome number");
	}
	return 0;
}
