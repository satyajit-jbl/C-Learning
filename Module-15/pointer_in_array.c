#include<stdio.h>
int main()
{
      int a[5] ={12,25,52,45,85,5};
      *a=100;
      printf("%p\n", &a[0]); 
      printf("Array name: %p\n", a);
      printf("Array value: %d\n", *a);
    return 0;
}