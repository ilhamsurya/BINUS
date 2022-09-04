#include <stdio.h>
#include <stdbool.h>
#include<math.h>

    int main(int argc, char const *argv[])
    {
        int num1, num2, sum, avg;

        printf("Input first number (odd)");
        scanf("%d", &num1);

        while ( num1 % 2 == 0 )
        {
            printf("Invalid number,Enter the odd number ");
            scanf("%d", &num1);
        }

        printf("Input second number (even)");
        scanf("%d", &num2);

        while ( num2 % 2 != 0 )
        {
            printf("Invalid number,Enter the even number ");
            scanf("%d", &num2);
        }

        sum = num1 + num2;
        avg = (num1+num2)/2;
        printf("sum of your number is : %d \n", sum);
        printf("avg of your number is : %d \n", avg);
        printf("power of number %d : %f and number %d : %f \n", num1,pow(num1,2),num2,pow(num2,2));
    
        return 0;
    }