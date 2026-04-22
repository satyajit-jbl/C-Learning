#include <stdio.h>
int main()
{
    char s[50];
    //   scanf("%s",&s);
    // gets(s);
    fgets(s, 35, stdin); //print last char for null & also take Enter as input
    printf("%s", s);
    return 0;
}