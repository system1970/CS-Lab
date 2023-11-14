#include <stdio.h>
#include <math.h>

int main() {
    int n, temp, remainder, result = 0, length = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    temp = n;

    while (temp != 0) {
        temp /= 10;
        ++length;
    }

    temp = n;

    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, length);
        temp /= 10;
    }

    if (result == n)
        printf("%d is an Armstrong number.\n", n);
    else
        printf("%d is not an Armstrong number.\n", n);

    return 0;
}
