// to understand & and *

#include <stdio.h>

int main() {
    float num = 5.5f;
    printf("value of num = %f \n", num);
    // thus when we say name of the variable, we get its value
    printf("Address of num = %p %u \n", &num, &num);
    printf("value at address of num = %f \n", *(&num));
}

/* name of the variable is its value
unary * can be applied only to an address. When we do so, we get the value present in that address*/