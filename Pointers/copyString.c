#include <stdio.h>

void copyString(char *dst, const char *src) {
    while (*src != '\0') {
        *dst = *src;
        dst++;
        src++;
    }
    *dst = '\0';
}

int main() {
    char source[] = "Hello, Source!";
    char destination[20];
    copyString(destination, source);
    printf("Source: %s\n", source);
    printf("Destination: %s\n", destination);
    return 0;
}
