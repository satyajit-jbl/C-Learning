#include<stdio.h>
int main()
{
      int n, multiplication;
      scanf("%d", &n);
      
      for (int i = 1; i <= 12; i++)
      {
        printf("%d * %d = %d\n", n, i, n*i);
        // multiplication = i*n;
        // printf("%d %c %d %c %d\n", n,'*', i, '=', multiplication);
      }
      
    return 0;
}