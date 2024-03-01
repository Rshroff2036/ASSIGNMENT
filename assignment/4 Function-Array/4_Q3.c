//WAP to find reverse of string using recursion
#include<stdio.h>
#include<string.h>
int main()
{
	char name1[100];
	printf("enter your name :");
	scanf("%s",&name1);
	
	printf("enter your surname :");
	scanf("%s",&name2);
	
  printf("\n%s is reverse",strrev(name1));
  printf("\n%s is reverse",strrev(name2));
  
  return 0; 		
}


