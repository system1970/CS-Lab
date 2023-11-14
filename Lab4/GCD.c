#include <stdio.h>

int gcd(int x, int y){
    if(y==0){
        return x;
    } else {
        return gcd(y, x%y);
    }
}

int main(){
    int x,y;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    printf("The Gcd of %d and %d is %d",x,y,gcd(x,y));
    return 0;
}