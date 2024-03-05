#include<stdio.h>
int main()
{
	char array1[100],array2[100];
	printf("enter first name of your school name:");
	scanf("%s",&array1);
	printf("\nenter second name of your school name:");
	scanf("%s",&array2);
	
	printf("\nabbrreviated form of your school name:");
	printf("%c.",array1[0]);
	printf("%c. school",array2[0]);
	
	return 0;
}
