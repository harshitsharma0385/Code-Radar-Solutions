#include <stdio.h>

int main() {
    int n, i, j;
    
    // Ask the user for the number of rows
    
    scanf("%d", &n);
    
    // Loop from 'n' down to 1
    for (i = n; i >= 1; i--) {
        // Print 'i' stars in each row
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }
    
    return 0;
}

