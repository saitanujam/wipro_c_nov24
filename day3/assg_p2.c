#include<stdio.h>
//program to convert uppercase letter to smaller case letter
int main() {
    char ch=0;
    printf("enter the letter to be converted to lowercase:");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';
        printf("the uppercase letter is: %c", ch);
    }
    else 
     printf("invalid value entered");
}