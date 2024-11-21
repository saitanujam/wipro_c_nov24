#include<stdio.h>

//prog to check if a character is alphanumeric
int main()
{
    char character = 0;
    printf("enter the character");
    scanf("%c", &character);
    if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z') || (character > '0' && character < '9'))
     printf("the character is an alphanumeric");
    else
     printf("the character is not an alphanumeric");


}