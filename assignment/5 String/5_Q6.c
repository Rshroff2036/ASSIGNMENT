#include<stdio.h>
int main()
{
	char str[100];
	int digit,i,alpha,spl;
	
	printf("enter the alphabet and digits and special characters :");
	fgets(str,sizeof str,stdin);
	for(i=0;str[i]!='\0';i++)
{
	if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
    {
		alpha++;
	}
	else if(str[i]>='0'&&str[i]<='9')
	{
	    digit++;
    }
	else
    {   
	    spl++;
    }
}
printf("\nenter string contain alphabet: %d",alpha);
printf("\nenter string contain digits: %d",digit);
printf("\nenter string contain special characters: %d",spl-1);
return 0;
}
