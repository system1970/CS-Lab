#include <stdio.h>

void callByValue(int x) {
    x = x * 2;
}

void callByReference(int *y) {
    *y = *y * 2;
}

int main() {
    int a = 5;
    int b = 5;

    printf("Original value of 'a': %d\n", a);
    callByValue(a);
    printf("Value of 'a' after callByValue function: %d\n\n", a);

    printf("Original value of 'b': %d\n", b);
    callByReference(&b);
    printf("Value of 'b' after callByReference function: %d\n", b);

    return 0;
}
