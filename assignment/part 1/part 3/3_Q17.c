//.Calculate 5 numbers from user and calculate number of even and odd using of while loop
#include <stdio.h>
int main()
 {
    int num,count=1,even=0,odd= 0;;
    
    while (count <= 5)
	 {
        printf("Enter number %d: ", count);
        scanf("%d", &num);

        if (num % 2 == 0)
		    even++;
        else
            odd++;

        count++;
    }

    printf("Number of even numbers: %d\n", even);
    printf("Number of odd numbers: %d\n", odd);

    return 0;
}

