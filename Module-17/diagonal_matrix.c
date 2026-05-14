#include <stdio.h>
int main()
{
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int count = 0;
    int is_diagonal = 1;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (r == c) /* square matrix */
    {
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (i+j!=r-1)
               
                {
                    // we are outside diaginal
                    if (a[i][j] != 0)
                    {
                        is_diagonal = 0;
                        printf("The Matrix is not secondary diagonal");
                    }
                    
                }
                
            }
        }
        if (is_diagonal==1)
        {
            printf("The Matrix is Secendary diagonal");
        }
        
    }
    else
        printf("The Matrix is not diagonal");

    return 0;
}