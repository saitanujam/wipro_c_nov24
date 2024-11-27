#include<stdio.h>

int main() {
    char ch = 'z', *pc = NULL;
    int i = 750, *pi = NULL;
    pc = &i; //char pc is pointing to int variable i
    //char* = int*
    pi = &ch; // int pointer pi is pointing to char variable ch
    //int* = char*
    printf("%u %u %u %u \n", &i, &i+1, pc, pc + 1);
    printf("%u %u %u %u \n", &ch, &ch+1, pi, pi + 1);
    printf("%c %c\n", ch, *pi);
    printf("%d %d", i, *pc);
}

/*
A pointer of data type X* can point to a variable of only type X
*/