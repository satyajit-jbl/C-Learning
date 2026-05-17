#include<stdio.h>
int main()
{
     int n;
     scanf("%d", &n);
    int a[n];
     for (int i = 0; i < n; i++)
     {
        scanf("%d", &a[i]);
     }
     for (int i = 0; i < n; i++)
     {
        for (int j = n-1; j >= 0; j--)
        {
            if (i>j && i==j)
            {
               break;
            }
            
            // printf("%d %d", a[i], a[j]);
            a[i]=a[i+1];
            a[j]=a[j-1];
        }
        
        
     }
     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            printf("%d %d", a[i], a[j]);
        }
        
     }
     
     
return 0;
}