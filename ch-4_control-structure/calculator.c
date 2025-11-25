#include <stdio.h>
int main()
{
    int a, b;
    char operation;

    printf("enter first value :\n");
    scanf("%d", &a);

    printf("enter second value :\n");
    scanf("%d", &b);

    printf("enetr operation :");
    scanf(" %c", &operation);

    switch (operation)
    {
    case '+':
        printf("%d", a + b);
        break;

    case '-':
        printf("%d", a - b);
        break;

    case '*':
        printf("%d", a * b);
        break;

    case '/':
        printf("%d", a / b);
        break;

    default:
        printf("invalid operation");
    }

    return 0;
}