#include<stdio.h>
#include<stdlib.h>
//program to count the sum of odd digits in a number
int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int odddigit_sum = 0, remainder_digit = 0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (remainder_digit % 2 != 0)
            odddigit_sum += remainder_digit;
        input_number = input_number / 10;
    }
printf("sum of odd digits: %d", odddigit_sum);
}