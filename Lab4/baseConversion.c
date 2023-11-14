#include <stdio.h>
#include <math.h>

int convertBaseToDecimal(int number, int base);
int convertDecimalToBase(int decimalNumber, int base);

int main() {
    int decimalNum, binaryNum, octalNum;

    printf("Enter a decimal number: ");
    scanf("%d", &decimalNum);

    binaryNum = convertDecimalToBase(decimalNum, 2);
    printf("Binary equivalent: %d\n", binaryNum);

    octalNum = convertDecimalToBase(decimalNum, 8);
    printf("Octal equivalent: %d\n", octalNum);

    printf("Enter a binary number: ");
    scanf("%d", &binaryNum);
    printf("Decimal equivalent: %lld\n", convertBaseToDecimal(binaryNum, 2));

    printf("Enter an octal number: ");
    scanf("%d", &octalNum);
    printf("Decimal equivalent: %lld\n", convertBaseToDecimal(octalNum, 8));

    return 0;
}

int convertBaseToDecimal(int number, int base) {
    int decimalNumber = 0;
    int remainder, i = 0;

    while (number != 0) {
        remainder = number % 10;
        decimalNumber += remainder * pow(base, i);
        number /= 10;
        i++;
    }

    return decimalNumber;
}

int convertDecimalToBase(int decimalNumber, int base) {
    int baseNumber = 0, remainder, i = 1;

    while (decimalNumber != 0) {
        remainder = decimalNumber % base;
        decimalNumber /= base;
        baseNumber += remainder * i;
        i *= 10;
    }

    return baseNumber;
}
