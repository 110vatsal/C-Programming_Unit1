#include <stdio.h>

int main() 
{
    int num1, num2, product;

    printf("write two numbers: ");
    scanf("%d %d", &num1, &num2);

    product = num1 * num2;
    
    printf("multiplication of %d and % d is:%d", num1, num2, product);
    
    return 0;
}