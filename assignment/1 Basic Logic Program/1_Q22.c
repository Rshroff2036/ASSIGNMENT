//Calculate compound interest
// formula = P(1+R/100)t 
#include<stdio.h>
int main()
{
	float principal,time,rate,amount,compound_interest;
	printf("\n enter the principal amount :");
	scanf("\n %f",&principal);
	
	printf("\n enter the rate of interest :");
	scanf("\n %f",&rate);
	
	printf("\n enter the time period: ");
	scanf("\n %f",&time);
	
		
    amount = principal*(1+rate/100)*time;
    printf("\n Total Amount you have to pay is  : %.2f",amount);
    
    compound_interest = amount - principal;
    printf("\n Interest on principle amount : %.2f",compound_interest);

	return 0;
}
