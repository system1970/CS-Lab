#include <stdio.h>

void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1 = 5, num2 = 10;

    printf("Before Swap - num1: %d, num2: %d\n", num1, num2);

    swapByValue(num1, num2);
    printf("After Swap by Value - num1: %d, num2: %d\n", num1, num2);

    num1 = 5;
    num2 = 10;

    swapByReference(&num1, &num2);
    printf("After Swap by Reference - num1: %d, num2: %d\n", num1, num2);

    return 0;
}
