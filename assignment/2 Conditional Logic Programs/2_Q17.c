//Write a C program to check whether a triangle can be formed with the given values for the angles
#include<stdio.h>
int main()
{
	float angle1,angle2,angle3,sum;
	printf("enter the three angles : ");
	scanf("%f %f %f",&angle1,&angle2,&angle3);
	sum=angle1+angle2+angle3;
	if(sum==180)
	{
		printf("triangle can be formed");
	}
	else
	{
		printf("triangle cannot be formed");
	}
	return 0;
}

