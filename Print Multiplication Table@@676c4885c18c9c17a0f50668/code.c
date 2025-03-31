#include<stdio.h>
int main(){
    int a, i, product = 1;
    scanf("%d", &a);
    for(i = 0; i< 11; i++){
        product = a*i;
        printf("%d X %d = %d", a, i, product);
    }
    return 0;
}