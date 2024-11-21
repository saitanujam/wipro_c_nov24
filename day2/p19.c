#include<stdio.h>

//prog to check if a year is leap year
int main()
{
    int year = 0;
    printf("enter the year to check");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
     printf("%d is a leap year\n", year);
    else
     printf("%d is not a leap year\n", year);


}