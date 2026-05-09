#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    // int number = 0;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int i = space; i >0; i--)
        {
            printf(" ");
        }
        
        for (int j = i; j>0; j--)
        {
            
            printf("%d", j);
        }

        space=space-1;
        printf("\n");
    }

    return 0;
}