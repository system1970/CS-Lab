#include <stdio.h>

void reverseSentence(char *string,int index) {
    if(string[index]=='\0') return;
    reverseSentence(string,index+1);
    printf("%c",string[index]);
}


int main() {
    char string[1024] = "This is the string";
    // printf("Enter a sentence: ");
    // scanf("%s", string);
    reverseSentence(string, 0);
    printf("\n");

    return 0;
}
