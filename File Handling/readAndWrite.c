#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char buffer[1000];
    size_t bytesRead;

    sourceFile = fopen("./Files/sample.txt", "rb");

    if (sourceFile == NULL) {
        printf("Source file not found or could not be opened.\n");
        return 1;
    }

    destFile = fopen("./Files/destination.txt", "wb");

    if (destFile == NULL) {
        printf("Could not create or open the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((bytesRead = fread(buffer, 1, sizeof(buffer), sourceFile)) > 0) {
        fwrite(buffer, 1, bytesRead, destFile);
    }

    fclose(sourceFile);
    fclose(destFile);

    printf("File copied successfully.\n");

    return 0;
}
