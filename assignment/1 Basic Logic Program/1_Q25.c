#include <stdio.h>
int main() 
{
    float expenses[5];
    float total_expense = 0;
    float average_expense;
    int i;

    printf("Enter 5 expenses:\n");
    for (i = 0; i < 5; i++)
	 {
        printf("Expense %d: ", i+1);
        scanf("%f", &expenses[i]);
        total_expense += expenses[i];
    }

    average_expense = total_expense / 5;

    printf("\nAverage expense: %.2f\n", average_expense);

    return 0;
}

