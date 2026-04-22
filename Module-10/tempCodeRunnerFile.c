#include<stdio.h>
int main()
{
      char s[10];
      scanf("%s", &s);
      printf("%c\n",s[1]); //print character
      printf("%s\n",s); //print string
      printf("%d", s[7]); //garbage value check 
    return 0;
}