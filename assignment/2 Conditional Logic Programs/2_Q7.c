//Accept marks from user and check pass or fail
#include<stdio.h>
int main()
{
	float marks;
	printf("enter the marks : ");
	scanf("%f",&marks);
	if(marks>=35)
	{
		printf("pass",marks);
	}
	else
	{
		printf("fail",marks);
	}
	return 0;
}
