// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char s[10000];
//     scanf("%s", s);
//     // printf("%c\n", s[0]);
//     int len = strlen(s);
//     // for (int i = 0; i <len ; i++)
//     // {
//     //     printf("%c", s[i]);
//     // }
//     for (int i = 0; i < len; i++)
//     {
//         int count = 0;
//         // printf("%c", s[i]);
//         for (int j = 0; j < len; j++)
//         {

//             if (s[i]==s[j])
//             {
//                 count++;
//             }

//         }
//         printf("%c %d\n ", s[i], count);

//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>
int main()
{
    char s[10000];
    scanf("%s", s);
    int length_s = strlen(s);
    // printf("%c", s[0]);
    char m[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j',
        'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
        'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < 26; i++)
    {
        int count = 0;
        for (int j = 0; j < length_s; j++)
        {
            if (m[i] == s[j])
            {
                count++;
            }
        }
        if (count!=0)
        {
            printf("%c - %d\n", m[i], count);
        }
     
    }

    return 0;
}