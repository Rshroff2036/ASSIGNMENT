//1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>
int main() 
{
    int n;
    int sum = 0;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    sum = (n*(n + 1)) / 2;

    printf("Sum %d\n",sum);

    return 0;
}

