#include <stdio.h>

int factorial(int n) { 
    if(n<=1)
        return 1;
    return n * factorial(n-1);
}
int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial is not defined for negative integers.\n");
    else {
        printf("Factorial of %d = %d\n", n, factorial(n));
    }

    return 0;
}
