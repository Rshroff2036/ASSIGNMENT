//Find the Character Is Vowel or Not
#include<stdio.h>
int main()
{
	char alphabet;
	printf("enter the alphabet :");
	scanf("%c",&alphabet);
	if (alphabet == 'a'|| alphabet=='e'|| alphabet=='i'||alphabet=='o'||alphabet=='u')
	{
		printf("entered alphabet is vowel",alphabet);
	}
	else
	{
		printf("entered alphabet is not a vowel",alphabet);
	}
	
	return 0;
	
}
