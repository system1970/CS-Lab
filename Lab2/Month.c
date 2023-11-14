#include <stdio.h>

int main() {
    char input;

    printf("Enter the first letter of a month: ");
    scanf(" %c", &input);

    switch (input) {
        case 'J':
        case 'j':
            printf("January or June or July\n");
            break;
        case 'F':
        case 'f':
            printf("February\n");
            break;
        case 'M':
        case 'm':
            printf("March or May\n");
            break;
        case 'A':
        case 'a':
            printf("April or August\n");
            break;
        case 'S':
        case 's':
            printf("September\n");
            break;
        case 'O':
        case 'o':
            printf("October\n");
            break;
        case 'N':
        case 'n':
            printf("November\n");
            break;
        case 'D':
        case 'd':
            printf("December\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
