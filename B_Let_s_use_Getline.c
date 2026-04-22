#include<stdio.h>
int main()
{
       char s[100000];
    //    scanf("%c", s);
    fgets(s, 1000000, stdin);

       for (int i = 0; s[i] !='\\'; i++)
       {
        printf("%c", s[i]);
       }
       
    return 0;
}