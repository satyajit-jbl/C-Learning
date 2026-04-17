#include<stdio.h>
int main()
{
       int n;
       while (scanf("%d", &n))
    //    for ( ; scanf("%d", &n); ) (for (initialization; condition; update))
       {
        if(n==1999)
       {
        printf("Correct\n");
        break;
       }
       else
       {
        printf("Wrong\n");
       }
       }
       
    return 0;
}