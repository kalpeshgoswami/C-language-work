#include <stdio.h>

int main()
{
    int a = 10;

    float b = 10.5;

    char c = 'A';

    int result1 = sizeof(a);

    printf("%zu\n", result1);

    int result2 = sizeof(b);

    printf("%zu\n", result2);

    int result3 = sizeof(c);

    printf("%zu\n", result3);

    return 0;
}