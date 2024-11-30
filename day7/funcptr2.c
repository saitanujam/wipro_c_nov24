#include <stdio.h>

// Observe the prototypes of both the functions are same
double findSum(double, double);
double findProduct(double, double);

double findSum(double num1, double num2)
{
    return num1 + num2;
}

double findProduct(double num1, double num2)
{
    return num1 * num2;
}

double polymorphicFunction(double (*fptr)(double, double), double num1, double num2)
{
    double result = fptr(num1, num2); //polymorphic call. call is defined/ binded at run time only
    return result;
    //return fptr(num1, num2);
}

int main()
{
    printf("Sum of 12.5 and 25.2 = %.2f \n", polymorphicFunction(&findSum, 12.5, 25.2));
    printf("Product of 2.4 and 14.5 = %.2lf", polymorphicFunction(&findProduct, 2.5, 14.5));
}