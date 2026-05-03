#include<stdio.h>
int main()
{
      int n;
      scanf("%d", &n);
      for (int i = n-1; i >=0; i--)
      {
        /* code */
        int j=0;
        do
        {
            printf("%c", '*');
            j++;
        } while (j<=i);
        
        printf("\n");
      }
       
    return 0;
}