#include<stdio.h>
#include<stdlib.h>
 void main()
 {
 	char str[100];//decalre a string of size 100
 	int l=0;
 	printf("\n separate the individual character from the string");
 	printf("input the string :");
 	//scanf("%s",&str);
 	fgets(str,sizeof str,stdin);
 	printf("the character of the string are : \n");
 	while(str[l]!='\0')
 	{
 		printf("%c ",str[l]);
 		l++;
	 }
	 //printf("/n");
 }
