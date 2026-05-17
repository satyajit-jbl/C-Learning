#include <stdio.h>
void fun(int m)
{
    if (m == 0)
    {
        return;
    }
    int digit = 0;
    digit = m % 10;
    fun(m / 10);
    printf("%d ", digit);
}
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {

        int number;
        scanf("%d", &number);
        if (number == 0)
        {
            printf("0");
        }
        else
        {
            fun(number);
        }

        printf("\n");
    }

    return 0;
}