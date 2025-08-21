#include <stdio.h>

int main() 
{
    int num1, num2;
    float result;

    printf("write two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    if(num2 != 0) 
    {
        result = (float)num1 / (float)num2;
        printf("division of %d and %d is  %.1f\n",num1,num2, result);
        } else
        {
        printf("Division by zero is not possible.\n");
    }

    return 0;
}