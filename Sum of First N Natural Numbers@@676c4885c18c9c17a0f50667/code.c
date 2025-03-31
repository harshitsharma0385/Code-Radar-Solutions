#include<stdio.h>
int main(){
    int n = 5, i;
    scanf("%d", &n);
    for(i = 0; i<= n ; i++){
        n += i;
    }
    printf("%d", n);
}