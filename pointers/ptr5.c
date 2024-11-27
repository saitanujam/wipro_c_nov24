//to understand that an address is not a number

#include<stdio.h>
int main() {
    int num1 = 50;
    int *num2 = num1;
    printf("%d %d %d %d\n", num1 - 1, num1, num1 + 1, num1 + 2);
    printf("%d %d %d %d", num2 - 1, num2, num2 + 1, num2 + 2);
}

/*
int num1 = 50; 50 is stored in num1 as number
int *num2 = num1; 50is stored in num2 as address
o/p is 
49 50 51 52
46 50 54 58 here there is 4bytes gap cause now it is *num2 which only allows it to store the address and not a number
*/