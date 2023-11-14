#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
void countAlphabetsAndNumbers(const char *str, int *alphabetCount, int *numberCount) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha((unsigned char)str[i])) {
            (*alphabetCount)++;
        } else if (isdigit((unsigned char)str[i])) {
            (*numberCount)++;
        }
    }
}

char *reverseString(const char *str) {
    int length = strlen(str);
    char *reversed = (char *)malloc(length + 1);

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - i - 1];
    }
    reversed[length] = '\0';

    return reversed;
}

void reverseEachLine(char *str) {
    int start = 0, end = 0;
    while (str[end] != '\0') {
        if (str[end] == '\n') {
            // Reverse characters between start and end
            while (start < end) {
                char temp = str[start];
                str[start] = str[end - 1];
                str[end - 1] = temp;
                start++;
                end--;
            }
            // Move to the next line
            start = end + 1;
        }
        end++;
    }
}

int main() {
    FILE *file, *copyFile, *reverseFile, *reverseLineFile;
    char content[] = "A \"good\" password is a password that contains both uppercase and lowercase letters,\n"
                     "numerals, and special characters. Common passwords like \"Blue132&!*\" are often\n"
                     "strong enough to qualify as \"strong\" passwords \"Banana Fever Rowdy Horse Kazoo\n"
                     "82319!\" is a much stronger password than \"L1lb0P33p*\" and is easier to spell, and\n"
                     "remember.";

    file = fopen("./Files/my_file.txt", "w");

    if (file == NULL) {
        perror("Error opening my_file.txt");
        return 1;
    }

    fprintf(file, "%s", content);
    fclose(file);

    file = fopen("./Files/my_file.txt", "r");

    copyFile = fopen("./Files/copy_file.txt", "w");
    reverseFile = fopen("./Files/my_reverse.txt", "w");
    reverseLineFile = fopen("./Files/reverse_line_file.txt", "w");

    if (file == NULL || copyFile == NULL || reverseFile == NULL || reverseLineFile == NULL) {
        perror("Error opening files for additional operations");
        return 1;
    }

    int alphabetCount = 0, numberCount = 0;
    char line[1000];

    while (fgets(line, sizeof(line), file) != NULL) {
        countAlphabetsAndNumbers(line, &alphabetCount, &numberCount);
        fprintf(copyFile, "%s", line);

        char *reversed = reverseString(line);
        fprintf(reverseFile, "%s", reversed);
        free(reversed);

        reverseEachLine(line);
        fprintf(reverseLineFile, "%s", line);

        char *occurrence = strstr(line, "strong");
        while (occurrence != NULL) {
            int position = occurrence - line;
            for (int i = position + 6; line[i] != '\0'; i++) {
                line[i] = line[i - 1];
            }
            strncpy(&line[position], "secure", 6);
            occurrence = strstr(&line[position + 6], "strong");
        }

        fprintf(reverseLineFile, "%s", line);
    }

    printf("Alphabets: %d\nNumbers: %d\n", alphabetCount, numberCount);

    fclose(file);
    fclose(copyFile);
    fclose(reverseFile);
    fclose(reverseLineFile);

    return 0;
}
