#include <stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    char s[10000];
    int count_Cap = 0;
    int count_sm = 0;
    int count_dg = 0;

    for (int i = 0; i < t; i++)
    {

        scanf("%s", s);
        int s_len = strlen(s);
        for (int i = 0; i < s_len; i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                count_Cap++;
            }
            else if (s[i] >= 97 && s[i] <= 122)
            {
                count_sm++;
            }
            else if (s[i] >= 48 && s[i] <= 57)
            {
                count_dg++;
            }       
        }
        printf("%d %d %d\n", count_Cap, count_sm, count_dg);
        count_Cap = 0;
        count_sm=0;
        count_dg=0;
    }

    return 0;
}