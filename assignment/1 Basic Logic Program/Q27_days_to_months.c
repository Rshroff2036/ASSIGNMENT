//Convert days into months
#include<stdio.h>
int main()
{
	int days;
	float months;
	printf("enter days");
	scanf("%d",&days);
	months=days/30.4375;
	printf("months is %f",months);
	return 0;
}
