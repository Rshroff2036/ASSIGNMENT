//Convert temperature Fahrenheit to Celsius
#include<stdio.h>
int main()
{
	float fah,cel;
	printf("enter temperature into fahrenheit");
	scanf("%f",&fah);
	cel= (fah-32)*5/9;
	printf("celsius is %f",cel);
	return 0;
}
