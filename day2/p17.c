#include<stdio.h>

//prog to check if a character is digit
int main()
{
    char character = 0;
    printf("enter the character");
    scanf("%c", &character);
    if (character > '0' && character < '9')
     printf("the character is digit");
    else
     printf("the character is not digit");


}