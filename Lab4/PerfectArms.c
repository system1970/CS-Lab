#include <stdio.h>
#include <math.h>

int calculateDigits(int num) {
    int count = 0;

    while (num != 0) {
        num /= 10;
        count++;
    }

    return count;
}

int isArmstrong(int num) {
    int originalNum = num;
    int result = 0;
    int power = calculateDigits(num);

    while (num != 0) {
        int digit = num % 10;
        result += pow(digit, power);
        num /= 10;
    }

    return (result == originalNum);
}

int isPerfect(int num) {
    int sum = 1; 

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    return (sum == num);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num)) {
        printf("%d is an Armstrong number.\n", num);
    } else {
        printf("%d is not an Armstrong number.\n", num);
    }

    if (isPerfect(num)) {
        printf("%d is a Perfect number.\n", num);
    } else {
        printf("%d is not a Perfect number.\n", num);
    }

    return 0;
}