//.Write a program in C to find the number of times a given word 'is' appears in the given string.
#include <stdio.h>
#include<string.h> 
void main()
{
    int count = 0, k, times = 0,i,s, space;
    char string[1000];
 
    puts("Enter a string:");
    fgets(string,sizeof string,stdin);
   /*   Traverse the string to count the number of characters */
    while (string[count] != '\0')
    {
        count++;
    }
    /*   Finding the frequency of the word 'is' */
    for (k = 0; k <= count - 2; k++)
    {
        i =(string[k] == 'i' || string[k] == 'I');
        s =(string[k + 1] == 's' || string[k + 1] == 'S');
        space =(string[k + 2] == ' ' || string[k + 2] == '\0');
        if ((i && s && space) == 1)
            times++;
    }
    printf("Frequency of the word 'is' is %d\n", times);
}

