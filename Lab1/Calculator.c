#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;  
    }
    return 1;  
}

int main() {
    char operation;
    int num1, num2, result;

    while(1){
        printf("Enter operation (S for subtract, A for add, M for multiply, P for prime check, Q for exit): ");
        scanf(" %c", &operation);
        if(operation == 'Q') 
            break;
        switch (operation) {
            case 'S':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 - num2;
                printf("Result: %d\n", result);
                break;
            case 'A':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 + num2;
                printf("Result: %d\n", result);
                break;
            case 'M':
                printf("Enter two numbers: ");
                scanf("%d %d", &num1, &num2);
                result = num1 * num2;
                printf("Result: %d\n", result);
                break;
            case 'P':
                printf("Enter a number: ");
                scanf("%d", &num1);
                if (isPrime(num1)) {
                    printf("%d is a prime number.\n", num1);
                } else {
                    printf("%d is not a prime number.\n", num1);
                }
                break;
            default:
                printf("Invalid operation.\n");
        }
    }
    return 0;
}
