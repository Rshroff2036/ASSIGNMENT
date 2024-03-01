//Write a program in C to extract a substring from a given string.
#include <stdio.h>
#include <string.h>

void extractSubstring(char source[], int start, int length, char result[])
{
    int i, j;

    for (i = start, j = 0; i < start + length && source[i] != '\0'; i++, j++) 
	{
        result[j] = source[i];
    }
    result[j] = '\0';
}

int main()
{
    char str[100];
    char substring[100];
    int start, length;

    printf("Enter a string: ");
    fgets(str,sizeof str , stdin);

    printf("Enter the starting position to extract from: ");
    scanf("%d", &start);

    printf("Enter the length of the substring: ");
    scanf("%d", &length);

    extractSubstring(str, start, length, substring);

    printf("Substring extracted: %s\n", substring);

    return 0;
}

