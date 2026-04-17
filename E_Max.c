#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int max = 0;
      for (int i = 1; i <= n; i++)
      {
        int val;
        scanf("%d", &val);
        if (max < val)
        {
            max=val;
        }
      }
      printf("%d", max);
    return 0;
}