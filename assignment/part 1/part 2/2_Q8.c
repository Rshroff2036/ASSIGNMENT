//WAP to accept the height of a person in centimeters and categorize the person according to their height
#include<stdio.h>
int main()
{
	int height;
	printf("enter the height in centimeters : ");
	scanf("%d",&height);
	if(height>180)
	{
		printf("you are above average",height);
	}
	else if(height<=180 && height>100)
	{
		printf("you are average",height);
	}
	else if(height<=100)
	{
		printf("you are too short",height);
	}
	else
	{
	}
	return 0;
}
