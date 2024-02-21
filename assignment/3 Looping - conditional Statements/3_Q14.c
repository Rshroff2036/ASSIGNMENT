//Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>
int main()

 {
    int numbers[5];
    int i,factorial,fact;
    printf("Enter 5 numbers:\n");
    
    for(i = 0; i < 5; i++)
	 {
        printf("Enter number %d: ",i + 1);
        scanf("%d", &numbers[i]);
    }

    printf("\nFactorials of the entered numbers:\n");
    for(i = 0; i < 5; i++)
	 {
       fact= factorial(numbers[i]);
        printf("Factorial of %d = %lld\n", numbers[i], fact);
    }

    return 0;
}

