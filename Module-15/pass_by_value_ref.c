#include <stdio.h>

void change(int* x)
{
    *x = 100;
}

int main()
{
    int a = 10;
    change(&a);

    printf("%d\n", a);  // output: 10 (unchanged)
    return 0;
}