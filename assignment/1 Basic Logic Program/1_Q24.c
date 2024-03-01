#include <stdio.h>
int main() 
{
    char names[5][50];
    float salaries[5];
    float total_salary = 0;
    float average_salary;
    int i;
    
    printf("Enter names and salaries of employees:\n");
    for (i = 0; i < 5; i++)
	{
        printf("Employee %d:\n", i+1);
        printf("Name: ");
        scanf("%s", names[i]);
        printf("Salary: ");
        scanf("%f", &salaries[i]);
        total_salary += salaries[i];
    }

    average_salary = total_salary / 5;

    printf("\nTotal salary: %.2f\n", total_salary);
    printf("Average salary: %.2f\n", average_salary);

    return 0;
}

