#include <stdio.h>
//program to allow a person to go out only if it is sunny or sunny and raining

int main() {
    char weather=0;
    printf("enter 'r' for raining, 's' for sunny and 'c' for cloudy.\n how is the weather:");
    scanf("%c", &weather);
    if ((weather == 's') || (weather == 's' && weather == 'r'))
        printf("you can go out");
    else
        printf("you cannot go out");
}
