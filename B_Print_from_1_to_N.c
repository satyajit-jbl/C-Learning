#include<stdio.h>
void count (i)
{

if (i==0) //end condition
{
    return;
}
count(i-1); //increment/decrement
printf("%d\n", i);
}
int main()
{
      int n; 
      scanf("%d", &n);
      count(n); //initialization/starting
    return 0;
}