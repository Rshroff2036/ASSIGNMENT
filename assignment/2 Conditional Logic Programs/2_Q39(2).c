//Vowel or Consonant using switch case
#include<stdio.h>
int main()
{
	char alphabet;
	printf("enter the alphabet :");
	scanf("%c",&alphabet);
	switch(alphabet)
	{
	case'a':
	printf("Given alphabet is vowel");
	break;
	case'e':
	printf("Given alphabet is vowel");
	break;
	case'i':
	printf("Given alphabet is vowel");
	break;
	case'o':
	printf("Given alphabet is vowel");
	break;
	case'u':
	printf("Given alphabet is vowel");
	break;
	default:
	printf("Given alphabet is consonant ");	
	}
	return 0;
}
