#include <stdio.h>

int main() {
    char str[100];
    int flag = 1;
    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    int length = 0;

    while (str[length] != '\0') {
        length++;
    }

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0; 
            break;
        }
    }

    if (flag) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}