//Convert minutes into seconds and hours
#include<stdio.h>
int main()
{
	float minutes,seconds,hours;
	printf("enter minutes");
	scanf("%f",&minutes);
	seconds=minutes*60;
	hours=minutes/60;
	printf("hours is %f and seconds is %f",hours,seconds);
	return 0;
}
