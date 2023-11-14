#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file, *modifiedFile;
    char line[1000];

    file = fopen("./Files/sample.txt", "r");

    if (file == NULL) {
        printf("Original file not found or could not be opened.\n");
        return 1;
    }

    modifiedFile = fopen("./Files/modified.txt", "w");

    if (modifiedFile == NULL) {
        printf("Could not create or open the modified file.\n");
        fclose(file);
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL) {
        for (int i = 10; line[i] != '\0'; i++) {
            if(isalpha(line[i]))
                line[i] = toupper(line[i]);
        }
        fprintf(modifiedFile, "%s", line);
    }

    fclose(file);
    fclose(modifiedFile);

    return 0;
}
