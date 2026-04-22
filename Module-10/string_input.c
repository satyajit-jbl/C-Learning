#include<stdio.h>
int main()
{
      char s[5];
      printf("%d\n", s[5]);//garbage value, as blank
      scanf("%s", &s); //now scanned, set value
      printf("%c\n",s[1]); //print character - e
      printf("%s\n",s); //print string - Hello
      printf("%d", s[5]); //garbage value check 0, for null string
    return 0;
}