//Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
#include <string.h>

int main()  
{
	int i;
    char sentence[1000];

    printf("Enter a sentence: ");
    fgets(sentence,sizeof sentence, stdin);

    printf("Original sentence: %s", sentence);

    for ( i = 0; sentence[i] != '\0'; i++)
	 {
        if (islower(sentence[i])) 
		{
            sentence[i] = toupper(sentence[i]);
            
        } 
		  else if (isupper(sentence[i]))
	    {
            sentence[i] = tolower(sentence[i]);
        }
    }

    printf("Modified sentence: %s", sentence);

    return 0;
}

