#include<stdio.h>
int main()
{ //find the area and the circumference of the circle
//area of circle = pi*r*r
//circumference =2*pi*r
	float radius;
	printf("\n find the area of circle");
	printf("\n enter the radius of the circle");
	scanf("\n %f",&radius);
	
	printf("\n area of the circle is %f",3.14*radius*radius);
	
	printf("\n circumference of the circle is %f",2*3.14*radius);
	
	
	
	return 0;
}
