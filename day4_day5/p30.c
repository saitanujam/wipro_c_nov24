#include<stdio.h>
#include<stdlib.h>
//program to Find sum of even placed even digits in a number
int main(int argCount, char *args[])
{
   int inputNumber = atoi(args[1]);
    int sumOfDigits1 = 0, sumOfDigits2 = 0, flip = 0, remainderDigit = 0;
    printf("User given number is %d \n", inputNumber);
    while (inputNumber != 0)
    {
        remainderDigit = inputNumber % 10;
        inputNumber = inputNumber / 10;
        if (flip == 0)
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if (remainderDigit % 2 == 0)
                sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of even placed even digits is %d", sumOfDigits1);
    else
        printf("Sum of even placed even digits is %d", sumOfDigits2);
}

/*itr=1 while 4855 != 0 (True)
rem = 4855 % 10     (5)
4855 = 4855 / 10    (485 flip0)
5 % 2 == 0 (False)
sum1 = 0+0 =0 (flip=1)

itr=2 while 485 != 0 (True)
rem = 485 % 10     (5)
485 = 485 / 10    (48 flip1)
5 % 2 == 0 (False)
sum2 = 0+0 =0 (flip=0)

itr=3 while 48 != 0 (True)
rem = 48 % 10     (8)
48 = 48 / 10    (4 flip0)
8 % 2 == 0 (True)
sum1 = 0+8 =8 (flip=1)

itr=4 while 4 != 0 (True)
rem = 4 % 10     (4)
4 = 4 / 10    (0 flip1)
4 % 2 == 0 (true)
sum2 = 0+4 =4 (flip=0)

flip = 0 prints sum1 =8

 */