#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//program to find the sum of series n + n1 + n2 + ... 10 terms
int main(int argCount, char *args[])
{
   int termValue = atoi(args[1]);
   int numberOfTerms = 10;
   long long int sumOfTerms = 0;
   printf("value of n = %d", termValue);

   for (int i = 0; i <= 10; i++)
   {
     sumOfTerms += pow(termValue, i);
   }
   printf("sum of %d terms is %ld", termValue, sumOfTerms);

}


