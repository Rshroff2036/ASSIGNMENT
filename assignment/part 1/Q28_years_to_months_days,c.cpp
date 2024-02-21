//Convert years into days and months
#include<stdio.h>
int main()
{
	int days;
	float months,years;
	printf("enter years");
	scanf("%f",&years);
	months=years*12;
	days=months*30.4375;
	printf("months is %f and days is %d",months,days);
	return 0;
}
