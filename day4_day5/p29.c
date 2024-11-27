#include<stdio.h>
#include<stdlib.h>
//program to count the number of even digits in a number
int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int evendigit_count = 0, remainder_digit = 0;
    while (input_number != 0)  
    {
        remainder_digit = input_number % 10;
        if (remainder_digit % 2 == 0)
            evendigit_count++;
        input_number = input_number / 10;
    }
    printf("Number of even digits: %d", evendigit_count);
}

/* itr=1 while 148 !=0
rem=8 (148%10)
8 % 2 =0
edc=1
148 = 148/10  14

itr=2 while 14 !=0
rem=4 
4 % 2 =0
edc=1+1 =2
14/10  1

itr=3 while 1 !=0
rem=1
1 % 2 !=0
edc =2
1/10  0

*/


#include <stdio.h>
#include <stdlib.h>
// p29 Count the number of Even digits in a number

int countEvenDigits(int n)
{
    int countOfEvenDigits = 0, remainderDigit = 0;
    while (n != 0)
    {
        remainderDigit = n % 10;
        n = n / 10;
        if (remainderDigit % 2 == 0)
            countOfEvenDigits++;
    }
    return countOfEvenDigits;
}

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
    printf("User given number is %d \n", input_number);
    int countOfEvenDigits = countEvenDigits(input_number);
    printf("Count of Even Digits = %d", countOfEvenDigits);
}