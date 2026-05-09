#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int hash = 1;
    int space =n-1;
    int space2=1;
    

    if (n%2==0)
    {
        /* even */
        for (int i = 0; i < n; i++)
    {
            for (int i = space; i >=1; i--)
        {
            printf(" ");
        }
        
        
        if (i%2==1)
        {
        
        
            for (int j = 0; j < hash; j++)
        {
           
        printf("-");
           
        }

        hash = hash+2;
        
        }
        if (i%2==0)
        {
            for (int j = 0; j < hash; j++)
        {
           
        printf("#");
           
        }

        hash = hash+2;
        }
        

        space=space-1;

        printf("\n");
    }
    // next part
    for (int i = 1; i < n; i++)
    {
        
        for (int i = 0; i <space2; i++)
        {
            printf(" ");
        }

        if (i%2==1)
        {
            for (int j = hash-3; j >1; j--)
        {
           
        printf("#");
           
        }

        hash = hash-2;
        }
        if (i%2==0)
        {
            for (int j = hash-3; j >1; j--)
        {
           
        printf("-");
           
        }

        hash = hash-2;
        }

        space2 = space2+1;
        printf("\n");
    }
    }
    else if (n%2==1)
    {
        /* even */
        for (int i = 0; i < n; i++)
    {
            for (int i = space; i >=1; i--)
        {
            printf(" ");
        }
        
        
        if (i%2==1)
        {
        
        
            for (int j = 0; j < hash; j++)
        {
           
        printf("-");
           
        }

        hash = hash+2;
        
        }
        if (i%2==0)
        {
            for (int j = 0; j < hash; j++)
        {
           
        printf("#");
           
        }

        hash = hash+2;
        }
        

        space=space-1;

        printf("\n");
    }
    // next part
    for (int i = 1; i < n; i++)
    {
        
        for (int i = 0; i <space2; i++)
        {
            printf(" ");
        }

        if (i%2==1)
        {
            for (int j = hash-3; j >1; j--)
        {
           
        printf("-");
           
        }

        hash = hash-2;
        }
        if (i%2==0)
        {
            for (int j = hash-3; j >1; j--)
        {
           
        printf("#");
           
        }

        hash = hash-2;
        }

        space2 = space2+1;
        printf("\n");
    }
    }
    


    return 0;
}