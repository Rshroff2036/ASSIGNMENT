//C Program to Check Uppercase or Lowercase or Digit or Special Character
#include<stdio.h>
int main()
{
	char c;
	printf("enter any character : ");
	scanf("%c",&c);
	if(c>='A'&&c<='Z')
	{
		printf("entered character is uppercase",c);
	}
	else if(c>='a'&&c<='z')
	{
		printf("entered character is lowercase",c);
	}
	else if(c>='0'&&c<='9')
	{
		printf("entered charcter is digit",c);
	}
	else
	{
		printf("entered character is symbol",c);
	}
	return 0;
}
