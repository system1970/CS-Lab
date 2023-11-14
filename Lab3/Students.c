#include <stdio.h>

int main() {
    int rollNumbers[5];
    char names[5][100];

    // Input roll numbers and names
    for (int i = 0; i < 5; i++) {
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &rollNumbers[i]);

        printf("Enter name for student %d: ", i + 1);
        scanf("%s", names[i]);
    }

    // Display entered roll numbers and names
    printf("\nRoll Numbers and Names of Students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Roll Number: %d, Name: %s\n", rollNumbers[i], names[i]);
    }

    return 0;
}
