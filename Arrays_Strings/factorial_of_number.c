#include <stdio.h>
#include <stdlib.h>

int factorial(int num)
{
    if (num == 0) {
        return 1; 
    }
    else {
     return num  * factorial(num-1);
    }
}

int main(int argCount, char *args[])
{
    int num = atoi(args[1]);
    
    if(num > 0) {
        int fact = factorial(num);
    printf("factorial of number %d = %d", num, fact);
    }
    
}