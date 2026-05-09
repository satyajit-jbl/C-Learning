#include<stdio.h>
int main()
{
    char s[1000001];
    scanf("%d",s);
    int sum =0;
    for (int i = 0; i < 1000001; i++)
    {
        sum=sum+s[i];
    }
    printf("%d", sum);
    
    return 0;
}