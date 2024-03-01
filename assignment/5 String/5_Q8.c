#include<stdio.h>
int main()
{
	char str[100];
	int i,vowel=0,consonent=0;
	printf("enter the string :");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
		{
			char c = tolower(str[i]);
			if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
			{
				vowel++;
			}
			else
			{
				consonent++;
			}
			
		}
	}
		printf("\nvowels in entered string : %d",vowel);
	   	printf("\nconsonent in enterd string : %d",consonent);
	return 0;
}
