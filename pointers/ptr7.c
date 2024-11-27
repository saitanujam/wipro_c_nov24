#include<stdio.h>

int main() {
    char ch, *pc;
    short int si, *ps;
    int i, *pi;
    double d, *pd;
    printf("%u %u\n", sizeof(ch), sizeof(pc));
    printf("%u %u\n", sizeof(si), sizeof(ps));
    printf("%u %u\n", sizeof(i), sizeof(pi));
    printf("%u %u\n", sizeof(d), sizeof(pd));
}