#include <stdio.h>

long long factorial(int num)
 {
    long long result = 1;
    int i;

    for ( i = 1; i <= num; i++) {
        result *= i;
    }

    return result;
}

  int main()
 {
    int numbers[5];
    int i;
    
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials of the entered numbers:\n");
    for (i = 0; i < 5; i++)
	 {
        long long fact = factorial(numbers[i]);
        printf("Factorial of %d = %lld\n", numbers[i], fact);
    }

    return 0;
}

