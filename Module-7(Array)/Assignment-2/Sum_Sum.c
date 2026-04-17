#include<stdio.h>
int main()
{
      int n;
      scanf("%d", &n);
      int v[n];
      int sumPositive = 0;
      int sumNegative = 0;
      
      for (int i = 0; i < n; i++)
      {
        scanf("%d", &v[i]);
        if (v[i]>0)
        {
            sumPositive=sumPositive+v[i];
        }
        else if (v[i]<0)
        {
           sumNegative=sumNegative+v[i];
        } 
        
      }
      printf("%d %d", sumPositive, sumNegative);
    return 0;
}