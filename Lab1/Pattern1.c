#include <stdio.h>

int main(){
    int counter = 0;
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            printf("%d",++counter%10);
        }
        printf("\n");
    }
    return 0;
}