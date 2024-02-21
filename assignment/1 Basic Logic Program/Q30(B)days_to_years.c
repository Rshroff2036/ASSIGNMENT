//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int days;
	float years;
	printf("enter days");
	scanf("%d",&days);
	years=days/365.0;
	printf("%f is years",years);
	return 0;
}
