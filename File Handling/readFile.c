#include <stdio.h>

int main() {
    FILE *file;
    char ch;

    file = fopen("./Files/sample.txt", "r");

    if (file == NULL) {
        printf("File not found or could not be opened.\n");
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    fclose(file);

    return 0;
}
