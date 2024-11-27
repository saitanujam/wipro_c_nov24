#include<stdio.h>
#include<stdlib.h>
//program to print table of a number till multiple of 20

int main(int argcount, char *args[]) 
{
    int input_number1 = atoi(args[1]);
    int input_number2 = atoi(args[2]);
    for (int i = 1; i <= 20; i++)
    {
        printf("%d * %02d = %03d \t %d * %02d = %03d \n", input_number1, i, input_number1 * i, input_number2, i, input_number2 * i);
    }
}