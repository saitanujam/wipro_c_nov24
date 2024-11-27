// to understand that a number is not an address
#include<stdio.h>
int main() {
    int num1 = 50;
    int num2 = &num1;
    printf("%d %d %d %d\n", num1 - 1, num1, num1 + 1, num1 + 2);
    printf("%d %d %d %d", num2 - 1, num2, num2 + 1, num2 + 2);
}

/*
int num1 = 50; 50 is stored in num1 as number
int num2 = &num1; the address of num1 is stored in num2 as an address
o/p is 
49 50 51 52
6422295 6422296 6422297 6422298 here there is no 4bytes gap because even if  it is an address it is stored in num2 which is int type and hence will be treated as an integer
*/