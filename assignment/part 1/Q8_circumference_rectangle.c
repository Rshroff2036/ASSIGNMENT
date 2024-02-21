// Find circumference of Rectangle formula :2length+2width
#include<stdio.h>
int main()
{
	float length,width;
	printf("\n find the circumference of the rectangle");
	printf("\n enter the length of the rectangle");
	scanf("\n %f", &length);
	printf("\n enter the width of the rectangle");
	scanf("\n %f",&width);
	
	printf("\n circumference of the rectangle is %f",2*length+2*width);
	return 0;
}
