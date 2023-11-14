#include <stdio.h>

int main() {
    int n, a = 0, b = 1, temp;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d%s ", b, (i<n-1)? ", ": " ");
        temp = b;
        b = a+b;
        a = temp;
    }

    printf("\n");

    return 0;
}
