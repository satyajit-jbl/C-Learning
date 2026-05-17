#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);

        int a[1000], b[1000], c[1000];
        int i;

        for (i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            b[i] = a[i];
        }

        qsort(b, n, sizeof(int), cmp);

        for (i = 0; i < n; i++) {
            int diff = a[i] - b[i];
            if (diff < 0) diff = -diff;
            c[i] = diff;
        }

        for (i = 0; i < n; i++) {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}