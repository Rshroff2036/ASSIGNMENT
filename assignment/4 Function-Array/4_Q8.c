#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[100];
    char copy ;
    copy=str[100];
    printf("enter the string: ");
    scanf("%s",str);
    
        if (copy != str[100])
		{
            printf("%s is not a palindrome\n",copy);
        }
        else
        {
        	 printf("%s is a palindrome\n",copy);
		}

    return 0;
}

