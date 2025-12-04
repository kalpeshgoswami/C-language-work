#include<stdio.h>

int total(int a, int b) {       // function declaraton
    return a+b;
}

int minus(int a, int b) {
    return a-b;
}

int multiflication(int a, int b) {
    return a*b;
}

float divide(int a, int b) {
    return a/b;
}

int main (){

    int result1 = total (10, 20);  // function call

    int result2 = minus (30, 15);  // function call

    int result3 = multiflication (5, 6);  // function call

    float result4 = divide (10, 2);  // function call

    printf("The total is : %d\n", result1);
    
    printf("The minus is : %d\n", result2);

    printf("the multiflication is :%d\n", result3);

    printf("the divide is :%.2f\n", result4);

    return 0;

}