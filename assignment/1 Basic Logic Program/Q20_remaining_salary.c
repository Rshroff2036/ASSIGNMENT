//Accept monthly salary from the user and deduct 10% insurance premium,10% loan installment find out of remaining salary.

#include<stdio.h>
int main()
{
	float salary,insurance,loan,remaining_salary;
	printf("\n enter the monthly salary");
	scanf("\n %f",&salary);
	
	printf("\n insurance premium is 10%",insurance);
    insurance= 0.1*salary;
    
    printf("\n loan installment is 10%",loan);
	loan= 0.1*salary;

	remaining_salary= salary-insurance-loan;
	
	printf("\n remaining salary is %f", remaining_salary); 
	
	
	return 0;
}
