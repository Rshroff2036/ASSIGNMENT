//find the area of the triangle
//formula= 0.5*h*b
#include<stdio.h>
int main()
{
	float height,base;
	printf("\n finding the area of triangle");
	printf("\n enter the height of the triangle");
	scanf("\n %f",&height);
	printf("\n enter the base of the triangle");
	scanf("\n %f",&base);
	
	printf("\n area of the triangle is %f",0.5*height*base);
	return 0;
}
