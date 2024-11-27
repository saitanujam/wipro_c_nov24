#include<stdio.h>
#include<stdlib.h>

// program to print a pattern of square with *

int main(int argcount, char *args[]) 
{
    int rows = atoi(args[1]);
    printf("user given number for rows of square is: %d\n", rows);
    int i = 0, j = 0;
    
    for(i = 1; i <= rows; i++) 
    {
         for(j = 1; j <= rows; j++) 
         {
             printf("*");
             printf(" ");
         }
         printf("\n");
    }
}