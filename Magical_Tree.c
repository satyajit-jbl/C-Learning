#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int rows = 6 + (n - 1) / 2;
    int base = 2 * rows - 1;

    
    int i, j;
    for (i = 0; i < rows; i++) {
        int stars = 2 * i + 1;
        int spaces = (base - stars) / 2;
        for (j = 0; j < spaces; j++) printf(" ");
        for (j = 0; j < stars; j++) printf("*");
        printf("\n");
    }

    
    int l_space = (base - n) / 2;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < l_space; j++) printf(" ");
        for (j = 0; j < n; j++) printf("*");
        printf("\n");
    }

    return 0;
}
