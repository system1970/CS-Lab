#include <stdio.h>

int main() {
    char str1[] = "123";
    char str2[] = "EEE";

    printf("Size of \"123\": %lu bytes\n", sizeof(str1));
    printf("Size of \"EEE\": %lu bytes\n", sizeof(str2));

    return 0;
}
