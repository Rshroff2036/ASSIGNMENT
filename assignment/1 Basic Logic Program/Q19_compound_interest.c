//Calculate compound interest
// formula = P(1+R/100)t 
#include<stdio.h>
int main()
{
	float principal,time,rate,ci;
	printf("\n enter the principal amount");
	scanf("\n %f",&principal);
	
	printf("\n enter the rate of interest");
	scanf("\n %f",&rate);
	
	printf("\n enter the time period");
	scanf("\n %f",&time);
	
		
    ci = principal*(1+rate/100)*time;
    
    printf("\n compound interest is %f",ci);
    
    

	return 0;
}
