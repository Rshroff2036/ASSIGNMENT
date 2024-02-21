//1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n
#include<stdio.h>
int main() 
{
    int i,n,sign = 1,sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
	 {
        sum += sign*i/(i + 1);
        sign = -sign; 
     }
    printf("Sum of the series is: %d\n", sum);

    return 0;
}

