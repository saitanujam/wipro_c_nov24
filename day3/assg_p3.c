#include<stdio.h>

//prog to check if a letter is upper case
int main()
{
    char letter = 0;
    printf("enter the letter");
    scanf("%c", &letter);
    if (letter >= 'A' && letter <= 'Z')
     printf("the letter is upper case");
    else
     printf("invalid value entered");

}