//Store 5 numbers in array and sort it in ascending order
#include<stdio.h>
int main()
{
	int i,n,j,array[5],temp;
	printf("enter total value");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&array[i]);
	}
	printf("before sorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(array[i]>array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
			}
		}
	}
	printf("\n after sorting: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",array[i]);
	}
	return 0;
	
}
