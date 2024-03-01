//Accept 5 numbers from user and perform sum of array
#include<stdio.h>
int main()
{
	int i,sum=0;
	int number[5];
	printf("enter the 5 number: ");
	
	for(i=0;i<5;i++)
	{
	 printf("\n number %d :",i+1);
	 scanf("%d",&number[i]);
	}
	for(i=0;i<5;i++)
	{
	  sum+=number[i];
	  printf("sum of 5 number : %d ",sum);
	}
	return 0;
}
