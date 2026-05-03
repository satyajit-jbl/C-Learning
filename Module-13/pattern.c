// #include<stdio.h>
// int main()
// {
//       int n;
//       scanf("%d", &n);
//       for (int i = n-1; i >=0; i--)
//       {
//         /* code */
//         int j=0;
//         do
//         {
//             printf("%c", '*');
//             j++;
//         } while (j<=i);
        
//         printf("\n");
//       }
       
//     return 0;
// }
#include<stdio.h>
int main()
{
      int n;
      scanf("%d", &n);
      int star= n;
      for (int i = 1; i <= n; i++)
      {
        for (int j = 1; j <= star; j++)
        {
            printf("*");
            
        }
        printf("\n");
        star--;
      }
       
    return 0;
}
// #include<stdio.h>
// int main()
// {
//       int n, star = 1;
//       scanf("%d", &n);
//       for (int i = 1; i <= n; i++)
//       {
//         for (int j = 1; j <= star; j++)
//         {
//             printf("%c", '*');
            
//         }
//         printf("\n");
//         star++;
//       }
       
//     return 0;
// }
// #include<stdio.h>
// int main()
// {
//       int n;
//       scanf("%d", &n);
//       for (int i = 0; i < n; i++)
//       {
//         /* code */
//         int j=0;
//         do
//         {
//             printf("%c", '*');
//             j++;
//         } while (j<=i);
        
//         printf("\n");
//       }
       
//     return 0;
// }