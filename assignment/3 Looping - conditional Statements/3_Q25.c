//(1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>
int main()
 {
    int n,i;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
	 {
        sum += i * i; 
    }

    printf("sum : %d\n", sum);

    return 0;
}

