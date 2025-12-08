#include<stdio.h>

int main()

{
    int a = 5;
    int *ptr = &a;

    *ptr = 10;

    printf("pointer address: %u\n", ptr);

    printf("value of a: %d\n", a);

    return 0;
}