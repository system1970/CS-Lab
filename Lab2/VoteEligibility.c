#include <stdio.h>

int main() {
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    const char *result = (age > 18) ? "You are eligible for vote" : "You are not eligible for vote";

    printf("%s\n", result);

    return 0;
}
