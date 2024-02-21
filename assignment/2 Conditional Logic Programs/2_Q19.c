//Write a program in C to calculate and print the electricity bill of a given customer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to the customer. The charge are as follow :
//Unit 21. Charge/unit
//upto 350 23. @1.20
//350 and above but less than 600 25. @1.50
//600 and above but less than 800 27. @1.80
// 800 and above 29. @2.00
#include<stdio.h>
int main()
{
	int customerid;
	float units,charges,surcharge=0,grossamount;
	char customername[100];
	printf("enter the customerid : ");
	scanf("%d",&customerid);
	
	printf("enter the customername :");
	scanf("%s",&customername);
	
	printf("enter consumed unit : ");
	scanf("%f",&units);
	
	if(units<350)
	{
		charges=1.20;
		printf("%f",charges);
	}
	else if(units=350 || units<600)
	{
		charges=1.50;
		printf("%f",charges);
	}
	else if(units=600 ||units<800)
	{
		charges=1.80;
		printf("%f",charges);
	}
	else
	{
		charges=2.00;
		printf("%f",charges);
	}
	grossamount=units*charges;
	printf("%f is the amount to be pay",grossamount);
	
	return 0;
}
