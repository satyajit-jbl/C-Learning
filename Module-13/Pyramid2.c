#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int value = 1;
    int space=n-1;

    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        
        for (int i = 1; i <= value; i++)
        {
            printf("%d", i);
        }
        value=value+1;
        space=space-1; //change to shape
        printf("\n");
    }
    

    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 2*n-1;
//     int space=1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int i = 1; i <= space; i++)
//         {
//             printf(" ");
//         }
        
//         for (int i = 1; i <= star; i++)
//         {
//             printf("*");
//         }
//         star=star-2;
//         space=space+1; //change to shape
//         printf("\n");
//     }
    

//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int star = 1;
//     int space=n-1;

//     for (int i = 0; i < n; i++)
//     {
//         for (int i = 1; i <= space; i++)
//         {
//             printf(" ");
//         }
        
//         for (int i = 1; i <= star; i++)
//         {
//             printf("*");
//         }
//         star=star+1;
//         space=space-1; //change to shape
//         printf("\n");
//     }
    

//     return 0;
// }