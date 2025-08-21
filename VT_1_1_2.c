#include <stdio.h>

int main() 
{
    int num1, num2, difference;

    printf("write two numbers: ");
    scanf("%d %d", &num1, &num2);

    difference = num1 - num2;
    
    printf("substraction of %d and % d is:%d", num1, num2, difference);
    
    return 0;
}