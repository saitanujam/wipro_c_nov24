#include<stdio.h>
//program to check if a number is two digit
int main () {
int num = 0;
printf("enter number: ");
scanf("%d", &num);
if ((num >= 10 && num <= 99) || (num <= -10 && num >= -99))
 printf("The given number is two digit");
else
printf("The number is not two digit");
}
