#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("Total number of command line arguments: %d\n", argc);

    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%d: %s\n", i, argv[i]);
    }

    return 0;
}
