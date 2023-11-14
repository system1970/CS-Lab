#include <stdio.h>

double squareRoot(double num) {
    if (num < 0) {
        printf("Square root is not defined for negative numbers.\n");
        return -1.0;
    }

    if (num == 0 || num == 1) {
        return num;
    }

    double low = 0.0, high = num, mid, epsilon = 0.00001;

    while (high - low > epsilon) {
        mid = low + (high - low)/2.0;

        if (mid * mid > num) {
            high = mid;
        } else {
            low = mid;
        }
    }

    return low + (high - low)/2.0;
}

int main() {
    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    double result = squareRoot(number);

    if (result != -1.0) {
        printf("Square root of %.2lf = %.5lf\n", number, result);
    }

    return 0;
}
