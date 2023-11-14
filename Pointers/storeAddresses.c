#include <stdio.h>

struct Sample {
    int data;
};

int main() {
    int integerVar = 42;
    char charVar = 'A';
    float floatVar = 3.14f;
    double doubleVar = 2.71828;
    int arrayVar[] = {1, 2, 3, 4, 5};
    struct Sample structVar = {100};
    char stringVar[] = "Hello, Pointers!";

    int *intPtr = &integerVar;
    char *charPtr = &charVar;
    float *floatPtr = &floatVar;
    double *doublePtr = &doubleVar;
    int *arrayPtr = arrayVar;
    struct Sample *structPtr = &structVar;
    char *stringPtr = stringVar;

    printf("Integer: %d, Address: %p\n", *intPtr, (void *)intPtr);
    printf("Char: %c, Address: %p\n", *charPtr, (void *)charPtr);
    printf("Float: %.2f, Address: %p\n", *floatPtr, (void *)floatPtr);
    printf("Double: %.5f, Address: %p\n", *doublePtr, (void *)doublePtr);

    printf("Array Elements and Addresses:\n");
    for (int i = 0; i < 5; i++) {
        printf("Index %d: %d, Address: %p\n", i, *(arrayPtr + i), (void *)(arrayPtr + i));
    }

    printf("Struct Data: %d, Address: %p\n", structPtr->data, (void *)structPtr);

    printf("String: %s, Address: %p\n", stringPtr, (void *)stringPtr);

    return 0;
}
