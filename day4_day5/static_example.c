#include<stdio.h>

int nonStaticFunction() {
    int i = 0;
    i += 2;
    return i;
}
int staticFunction() {
    static int i = 0;
    i += 2;
    return i; 
}
int main() {
    int var = 0;
     var = nonStaticFunction();
     printf("Var = %d \n", var);
     var = nonStaticFunction();
     printf("Var = %d \n", var);
     var = nonStaticFunction();
     printf("Var = %d \n", var);

     var = staticFunction();
     printf("Var = %d \n", var);
     var = staticFunction();
     printf("Var = %d \n", var);
     var = staticFunction();
     printf("Var = %d \n", var);
}


/*itr1= i =0
i += 2 (0+2=2)
returns 2 

itr2= i =0  ( i is reinitialized to 0)
i += 2 (0+2=2)
returns 2

itr3= i =0
i += 2 (0+2=2)
returns 2

itr4= i =0
i += 2 (0+2=2)
returns 2

itr5= i =2 (i value is retained and goes to the next one)
i += 2 (2+2=4)
returns 4

itr4= i =4
i += 2 (4+2=6)
returns 6
 */