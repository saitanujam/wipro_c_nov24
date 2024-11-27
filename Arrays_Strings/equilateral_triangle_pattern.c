#include<stdio.h>
#include<stdlib.h>

// program to print a pattern of equilateral triangle with *

int main(int argcount, char *args[]) 
{
    int rows = atoi(args[1]);
    printf("user given number for rows of traingle is: %d\n", rows);
    int i = 0, j = 0, blank= 0;
    
    for(i = 1; i <= rows; ++i) 
    {
        for(blank = 1; blank <= rows - i; ++blank) 
        {
            printf(" ");
        }
         for(j = 1; j <= 2 * i; ++j) 
         {
             printf("*");
         }
         printf("\n");
    }
}