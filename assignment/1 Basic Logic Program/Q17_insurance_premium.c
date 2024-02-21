//Calculate person’s insurance premium based on salary
#include<stdio.h>
int main()
{
	int salary,premium,insurance;
	printf("\n enter the persons salary");
	scanf("\n%d",&salary);
	printf("\n enter the percentage of insurance");
	scanf("\n%d",&premium);
	insurance=salary*premium;
	printf("insurance premium : %d",insurance);
	
	return 0;
}
