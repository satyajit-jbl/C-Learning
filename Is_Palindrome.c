#include<stdio.h>
#include <string.h>

int is_palindrome(char s[])
{
// printf("%c\n", s[8]); 

int length = 0;
char rev_s[1000];

for (int i = 0; i < 1000; i++)
{
    if (s[i]!=0)
    {
        length++;
    }
    else break;
    
    
}
// printf("%d\n", length);


// for (int i = 0, j=length-1; i <= length, j>0; i++, j--)
// {
   
//     if (i==j || i>j)
//         {
//             break;
//         }
        
//         char temp=s[i];
//         new_s[i]=s[j];
//         new_s[j]=temp;
//         // char temp=s[i];
//         // s[i]=s[j];
//         // s[j]=temp;

//         // new_s[i]=s[j];
//         // new_s[j]=s[i];
        
//     }
//     printf("%s", new_s);

for (int i = 0; i < length; i++)
{
    rev_s[i]=s[length-1-i];
}
rev_s[length]='\0';
// printf("%s\n", rev_s);
// if (rev_s==s)
// {
//     return 1;
// }
// else return 0;

// printf("after op %s\n", s);

for (int i = 0; i < length; i++)
{
    if (s[i]!=rev_s[i])
    {
        return 0;
        // printf("yyy");
    }
    
    
}

return 1;

}
int main()
{
    char s[1000];
    scanf("%s", s);
    
    int result = is_palindrome(s);
    if (result ==1 )
    {
        printf("Palindrome");
    }
    else printf("Not Palindrome");
     
    return 0;
}