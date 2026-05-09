// #include<stdio.h>
// int main()
// {
//     char s[101], a[101];
//     scanf("%s %s", s, a);
//     printf("%s %s\n", s, a);
//     int length = strlen(a);

//     for (int i = 0; i <= length; i++)
//     {
//         s[i] = a[i];
//     }
//     printf("%s %s", s, a);
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char s[101], a[101];
    scanf("%s %s", s, a);
    printf("%s %s\n", s, a);
    strcpy(s,a);
    printf("%s %s", s, a);
    
    return 0;
}