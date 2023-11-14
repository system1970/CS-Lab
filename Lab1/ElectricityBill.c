#include <stdio.h>

int main() {
    int units;
    float bill;

    printf("Enter the electricity units consumed: ");
    scanf("%d", &units);

    if (units <= 50) {
        bill = units * 5.00;
    } else if (units <= 150) {
        bill = 50 * 5.00 + (units - 50) * 5.50;
    } else if (units <= 250) {
        bill = 50 * 5.00 + 100 * 5.50 + (units - 150) * 10.20;
    } else {
        bill = 50 * 5.00 + 100 * 5.50 + 100 * 10.20 + (units - 250) * 12.50;
    }

    bill = bill + (15/100 * bill);

    printf("Total electricity bill: Rs. %.2f\n", bill);

    return 0;
}
