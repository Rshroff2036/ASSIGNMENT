//WAP to check if the given year is a leap year or not.
//leapyear= year%4==0
#include<stdio.h>
int main()
{
	int year;
	printf("enter the year");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("entered year is a leap year",year);
	}
	else
	{
		printf("entered year is not a leap year",year);
	}
	return 0;
	
}
