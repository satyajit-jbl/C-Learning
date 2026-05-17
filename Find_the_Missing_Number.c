#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    long long int m[n], a[n], b[n], c[n];
    long long int missing_number[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld %lld %lld %lld", &m[i], &a[i], &b[i], &c[i]);
    }
    for (int i = 0; i < n; i++)
    {
        long long int rem=m[i]%(a[i]*b[i]*c[i]);
        
        if (rem!=0)
        {
            printf("-1\n");
        }
        else 
        {
            missing_number[i]=m[i]/(a[i]*b[i]*c[i]);
            printf("%lld\n", missing_number[i]);

        }
    
        
        // printf("%d\n", rem);
    }

    return 0;
}