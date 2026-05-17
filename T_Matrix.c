#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int primary_sum=0;
    int secondary_sum=0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                // printf("%d\n", a[i][j]);
                primary_sum= primary_sum+a[i][j];
            }
            else if (i+j==n-1)
            {
                secondary_sum=secondary_sum+a[i][j];
            }
            
        }
        // printf("\n");
    }
    
    // printf(" Sum of primary diagonal %d\n", primary_sum);
    // printf(" Sum of secondary diagonal %d", secondary_sum);
    printf("%d", abs(primary_sum-secondary_sum));
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n][n];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     int primary_sum=0;
//     int secondary_sum=0;

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i==j)
//             {
//                 // printf("%d\n", a[i][j]);
//                 primary_sum= primary_sum+a[i][j];
//             }
            
//         }
//         // printf("\n");
//     }
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (i+j==n-1)
//             {
                
//                 secondary_sum=secondary_sum+a[i][j];
//             }

//         }
//     }
//     // printf(" Sum of primary diagonal %d\n", primary_sum);
//     // printf(" Sum of secondary diagonal %d", secondary_sum);
//     printf("%d", abs(primary_sum-secondary_sum));
//     return 0;
// }