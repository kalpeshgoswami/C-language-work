#include <stdio.h>

void bankBalance()
{
    printf("cheching bank balnce...");
}

void withDraw(){
    bankBalance();
    printf("\nmoney tranfer successfully...");
}

int main()
{
    withDraw();
    return 0;
}