// #include <stdio.h>

// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int a[n][m];

    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

    
//     for (int j = 0; j < m; j++)
//     {
//         printf("%d ", a[n - 1][j]);
//     }

//     printf("\n");

    
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ", a[i][m - 1]);
//     }

//     printf("\n");

//     return 0;
// }


#include<stdio.h>

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);

    int a[n][m];

    int i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    i=n-1;

    for(j=0;j<m;j++)
    {
        printf("%d ",a[i][j]);
    }

    printf("\n");

    j=m-1;

    for(i=0;i<n;i++)
    {
        printf("%d ",a[i][j]);
    }

    return 0;
}