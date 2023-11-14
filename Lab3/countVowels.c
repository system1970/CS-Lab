#include <stdio.h>
#include <string.h>
#include <ctype.h>

int countVowels(const char *name) {
    int count = 0;
    int len = strlen(name);

    for (int i = 0; i < len; i++) {
        char ch = tolower(name[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }

    return count;
}

int main() {
    char name[11];

    printf("Enter a name (length 10): ");
    scanf("%s", name);

    int vowelCount = countVowels(name);

    printf("Number of vowels in the name: %d\n", vowelCount);

    return 0;
}
