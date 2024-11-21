#include<stdio.h>

//prog to check if a character is alphabet
int main()
{
    char character = 0;
    printf("enter the character");
    scanf("%c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
     printf("the character is an alphabet");
    else
     printf("the character is not an alphabet");


}