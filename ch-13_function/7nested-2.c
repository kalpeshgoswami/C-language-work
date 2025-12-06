// #include <stdio.h>

// int addition()
// {

//     return 5 + 10;
// }

// void result()
// {

//     int result = addition();

//     printf("addition of numbers: %d\n", result);
// }

// int main()
// {

//     result();

//     return 0;
// }

#include <stdio.h>

int addition()
{
    return 5 + 10;
}

int multiplication()
{
    return 5 * 10;
}

void result_addition()
{
    int result = addition();
    printf("addition of numbers: %d\n", result);
}

void result_multiplication()
{
    int result = multiplication();
    printf("multiplication of numbers: %d\n", result);
}

int main()
{
    result_addition();
    result_multiplication();

    return 0;
}
