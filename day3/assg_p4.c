#include<stdio.h>
#include<ctype.h>
//program to check if a character is alphabet/ digit/ symbol
int main() {
    char ch = 0;
    printf("enter the character: ");
    scanf("%c", &ch);
    if (isalpha(ch)) {
        printf("It is an alphabet");
    }
    else if (isdigit(ch)) {
        printf("It is a digit");
    
    }
    else
     printf("It is a symbol");

}