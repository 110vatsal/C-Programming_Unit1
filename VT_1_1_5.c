#include <stdio.h>

int main() 
{
    int num1, num2;
    int sum, diff, mult;
    float div;

    printf("write two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    sum = num1 + num2;
    diff = num1 - num2;
    mult = num1 * num2;
    
    if(num2 != 0) 
    {
        div = (float)num1 / (float)num2;
        printf("Addition of %d and %d is: %d\n", num1, num2, sum);
        printf("Subtraction of %d and %d is: %d\n", num1, num2, diff);
        printf("Multiplication of %d and %d is: %d\n", num1, num2, mult);
        printf("Division of %d and %d is: %.1f\n", num1, num2, div);
    } 
    else
    {
        printf("Addition of %d and %d is: %d\n", num1, num2, sum);
        printf("Subtraction of %d and %d is: %d\n", num1, num2, diff);
        printf("Multiplication of %d and %d is: %d\n", num1, num2, mult);
        printf("Division by zero is not possible.\n");
    }

    return 0;
}