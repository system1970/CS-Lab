#include <stdio.h>

int main() {
    char choice;
    int num1, num2;

    do {
        printf("\tPress 'R' to enter two numbers and get their multiplication.\n");
        printf("\tPress 'E' to exit the program.\n>> ");
        scanf(" %c", &choice);

        switch (choice) {
            case 'R':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                printf("Multiplication: %d\n", num1 * num2);
                break;
            case 'E':
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }

    } while (choice != 'E');

    return 0;
}
