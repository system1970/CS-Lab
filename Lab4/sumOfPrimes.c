#include <stdio.h>

int isPrime(int num);

int canExpressAsSumOfPrimes(int num,int *a,int *b);

int main() {
    int num, a, b;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (canExpressAsSumOfPrimes(num, &a, &b)) {
        printf("%d can be expressed as the sum of two prime numbers.\n", num);
        printf("%d + %d = %d", a, b, num);
    } else {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }

    return 0;
}

int isPrime(int num) {
    if (num < 2) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int canExpressAsSumOfPrimes(int num,int *a,int *b) {
    for (int i = 2; i <= num / 2; i++) {
        if (isPrime(i) && isPrime(num - i)) {
            *a = i;
            *b = num-i;
            return 1;
        }
    }

    return 0;
}
