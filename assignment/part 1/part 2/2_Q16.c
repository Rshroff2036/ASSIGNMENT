//Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
//Temp < 0 then Freezing weather
//Temp 0-10 then Very Cold weather
//Temp 10-20 then Cold weather
//Temp 20-30 then Normal in Temp
//Temp 30-40 then Its Hot
//Temp >=40 then Its Very Hot
#include<stdio.h>
int main()
{
	float temperature;
	printf("enter the temperature in centigrade : ");
	scanf("%f",&temperature);
	if(temperature<0)
	{
		printf("frezzing weather");
	}
	else if(temperature<10)
	{
		printf("very cold temperature");
	}
	else if(temperature<20)
	{
		printf("cold wheather");
	}
	else if(temperature<30)
	{
		printf("normal temperature");
	}
	else if(temperature<40)
	{
		printf("its hot");
	}
	else
	{
		printf("its very very hot");
	}
	return 0;
}
