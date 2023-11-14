#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int numerator = 1, denominator = 1;
    int sum = 0;
    for(int i=0;i<n;i++) {
        numerator*=(i+1);
        sum+=numerator/denominator;
        denominator++;
    }
    printf("Sum of the series: %d\n", sum);

    return 0;
}