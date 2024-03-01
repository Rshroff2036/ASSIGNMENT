//WAP to make addition, Subtraction and multiplication of two matrix using 2-D Array
#include<stdio.h>
int main()
{
	int i,j,k;
	int row=2;
	int col=2;
	int array1[5][50];
	int array2[5][50];
	int sum;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter values of index[%d][%d]",i,j);
			scanf("%d",&array1[i][j]);
		}
	}
        	printf("\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter values of index[%d][%d]",i,j);
			scanf("%d",&array2[i][j]);
		}
	}
	printf("\n");
	printf("Addition:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				sum=array1[i][j]+array2[i][j];
			printf("%d\t",array1[i][j]+array2[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	printf("Substraction:\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
				sum=array1[i][j]-array2[i][j];
			printf("%d\t",array1[i][j]-array2[i][j]);
		}
		printf("\n");
	}
		printf("\n");
		printf("Multiplication:\n");
		for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			sum=0;
			for(k=0;k<2;k++)
			{
				sum=sum+array1[i][k]*array2[k][j];
			}

			printf("%d\t",sum);
		}
		printf("\n");	
	}
		
	
	return 0;

}
