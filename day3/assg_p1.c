#include<stdio.h>
//program to convert a smaller case letter to upper case letter
int main() {
    char ch=0;
    printf("enter a lowercase letter:");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
     ch = ch - 'a' + 'A';
     printf("the uppercase letter is: %c", ch);
    }
    else
     printf("invalid value entered");
}
