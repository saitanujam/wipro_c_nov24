#include<stdio.h>
#include<stdlib.h>

// program to print a pattern of hollow square with *

int main(int argcount, char *args[]) 
{
    int rows = atoi(args[1]);
    printf("user given number for rows of square is: %d\n", rows);
    int i = 0, j = 0;
    
    for(i = 1; i <= rows; i++) 
    {
        if (i == 1 || i == rows) 
        {
         for(j = 1; j <= rows; j++) 
         {
             printf("*");
             printf(" ");
         }
         printf("\n");
        }
        else
        {
            for (int j = 1; j <= rows; j++)
            {
                if(j==1 || j==rows)
                {
                    printf("*");
                    printf(" ");
                }
                else 
                {
                printf(" ");
                printf(" ");
                }
            }
            printf("\n");
        }
        
    }
    
}