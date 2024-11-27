#include<stdio.h>
#include<stdlib.h>
//program to Find sum of even placed Odd digits in a number
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
            if (remainderDigit % 2 != 0)
                sumOfDigits1 += remainderDigit;
            flip = 1;
        }
        else
        {
            if (remainderDigit % 2 != 0)
                sumOfDigits2 += remainderDigit;
            flip = 0;
        }
    }
    if (flip == 0)
        printf("Sum of even placed odd digits is %d", sumOfDigits1);
    else
        printf("Sum of even placed odd digits is %d", sumOfDigits2);
}



/*itr=1 while 4855 != 0 (True)
rem = 4875 % 10     (5)
4875 = 4875 / 10    (487 flip0)
5 % 2 != 0 (true)
sum1 = 0+5 =5 (flip=1)

itr=2 while 487 != 0 (True)
rem = 487 % 10     (5)
487 = 487 / 10    (48 flip1)
7 % 2 != 0 (true)
sum2 = 0+7 =7 (flip=0)

itr=3 while 48 != 0 (True)
rem = 48 % 10     (8)
48 = 48 / 10    (4 flip0)
8 % 2 != 0 (False)
sum1 = 5+0 =5 (flip=1)

itr=4 while 4 != 0 (True)
rem = 4 % 10     (4)
4 = 4 / 10    (0 flip1)
4 % 2 != 0 (false)
sum2 = 7+0 =7 (flip=0)

flip = 0 prints sum1 =5

 */