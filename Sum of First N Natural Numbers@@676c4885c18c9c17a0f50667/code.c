#include<stdio.h>
int main(){
    int n, i, sum = 0;
    for(i = 0; i < n+1; i++){
        sum += i;
    }
    printf("%d", sum);
    return 0;
}