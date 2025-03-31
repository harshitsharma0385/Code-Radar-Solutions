#include<stdio.h>
int main(){
    int a, i, product;
    scanf("%d", &a);
    for(i = 1; i< 11; i++){
        product = a*i;
        printf("%d X %d = %d", a, i, product);
    }
    return 0;
}