#include<stdio.h>

//prog to check if a letter is small case
int main()
{
    char letter = 0;
    printf("enter the letter");
    scanf("%c", &letter);
    if (letter >= 'a' && letter <= 'z')
     printf("the letter is small case");
    else
     printf("the letter is not a small case");


}