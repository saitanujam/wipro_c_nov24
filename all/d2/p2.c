#include<stdio.h>


int main() {
    int num1 =23, num2 = 12, result = 0;

    result = num1 & num2;
    printf("X & Y = %d \n", result);
    result = num1 | num2;
    printf("X | Y = %d \n", result);
    result = num1 ^ num2;
    printf("X ^ Y = %d \n", result);
    result = num1 >> 3; // num1 is immutable
    printf("X >> 3 = %d \n", result);
    result = num2 << 2; // num2 is immutable 
    printf("Y << 2 = %d \n", result);
}