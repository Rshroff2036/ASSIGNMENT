//WAP to accept 5 numbers from user and check entered number is even or odd using of array
#include<stdio.h>
int main()
{
	int n,i;
	int number[5];
	printf("enter the numbers :");
	scanf("%d",&n);
    for(i=1;i<=5;i++)
    {
        scanf("%d",&number[i]);
    }
	for(i=1;i<=5;i++)
	{
		if(number[i]%2==0)
			printf("\nEntered number in given string even :%d",number[i]);
	}
	for(i=1;i<=5;i++)
	{
		if(number[i]%2==1)
			printf("\nEntered number in given string odd :%d", number[i]);
	}
	return 0;
}
