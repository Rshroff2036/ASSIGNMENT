//WAP to convert years into days and days into years
#include<stdio.h>
int main()
{
	int days;
	float years;
	printf("enter years");
	scanf("%f",&years);
	days=years*365.0;
	printf("%d is days",days);
	return 0;
}
