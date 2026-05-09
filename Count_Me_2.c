#include<stdio.h>
#include<string.h>
int main()
{
      char s[100000];
      scanf("%s", s);
      int str_length= strlen(s);
      int count_vowel = 0;

      for (int i = 0; i <str_length ; i++)
      {
        if (s[i] == 'a' || s[i] =='e'||s[i] =='i'||s[i] =='o'||s[i] =='u')
        {
            count_vowel++; 
        }

      }
      printf("%d", str_length-count_vowel);
     
    return 0;
}