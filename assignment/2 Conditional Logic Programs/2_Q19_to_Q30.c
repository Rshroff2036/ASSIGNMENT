//Write a program in C to calculate and print the electricity bill of a givencustomer. The customer ID, name, and unit consumed by the user should
//be captured from the keyboard to display the total amount to be paid to thecustomer. The charge are as follow :
//20. Unit 21. Charge/unit
//22. upto 350 23. @1.20
//24. 350 and above but less than 600 25. @1.50
//26. 600 and above but less than 800 27. @1.80
//28. 800 and above 
//29. @2.00
//30.If bill exceeds Rs. 800 then a surcharge of 18% will be charged and the minimum bill should be of Rs. 256/-
#include<stdio.h>
int main()
{
	int id,unit;
	char name[50];
	float charge,surcharge,total;
	printf("enter customer Id:");
	scanf("%d",&id);
	printf("enter the name of customer:");
	scanf("%s",&name);
	printf("enter unit :");
	scanf("%d",&unit);
	
	if(unit<=350)
	{
		charge=1.20;
	}
	else if(unit<600)
	{
		charge=1.50;
	}
	else if(unit<800)
	{
		charge=1.80;
	}
	else
	{
		charge=2.00;
	}
	printf("Electricity bill ");
	printf("\ncustomer id : %d",id);
	printf("\ncustomer name : %s",name);
	printf("\ncustomer unit : %d",unit);
	printf("\ncharger per unit : %.2f",charge);
	
	total=unit*charge;
	if(total<256)
	{
		total=256;
		printf("\nminimum bill to pay : %.2f  ",total);
	}
	else if(total>800)
	{
	surcharge=total*0.18;
	total=total+surcharge;
}
	printf("\nElectricity bill you have to pay : %.2f ",total);

	return 0;	
}

