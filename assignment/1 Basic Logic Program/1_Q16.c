#include<stdio.h>
int main()
{
	char country[50];
	int i;
	printf("enter the name of country :");
	fgets(country,sizeof country,stdin);
	
	printf("abbreviated form of %s",country);
	for(i=0;i<3;i++)
	{
		printf("%c",country[i]);
	}
	return 0;
	
}
