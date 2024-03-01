#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	char copy[100];
	printf("enter the string :");
	fgets(str,sizeof str,stdin);
	strcpy(copy,str);
	printf(" %s is copy of entered string",copy);
	return 0;
}
