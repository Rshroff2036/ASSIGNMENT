//WAP to input the week number and print week day
#include<stdio.h>
int main()
{
	int weak;
	printf("enter the weaknumber : ");
	scanf("%d",&weak);
	if(weak==1)
	{
		printf("Monday");
	}
	else if(weak==2)
	{
		printf("Tuesday");
	}
	else if(weak==3)
	{
		printf("Wednesday");
	}
	else if(weak==4)
	{
		printf("Thrusday");
	}
	else if(weak==5)
	{
		printf("Friday");
	}
	else if(weak==6)
	{
		printf("Saturday");
	}
	else if(weak==7)
	{
		printf("Sunday");
	}
	else
	{
		printf("entered weaknumber is invalid ");
	}
	
	return 0;
}
