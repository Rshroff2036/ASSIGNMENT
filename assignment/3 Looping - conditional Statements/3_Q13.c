//calculate the Factorial of a Given Number using while loop
#include <stdio.h>
int main() 
{
    int number,i=1;
    int factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) 
	{
        printf("Factorial is not defined \n");
    }
    while (i <= number) 
	{
        factorial*= i; 
        i++;
    }
    printf("%d is factorial of given number\n",factorial);

    return 0;
}

