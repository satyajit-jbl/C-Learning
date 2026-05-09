#include<stdio.h>
int main()
{
      int x = 105;
      printf("%s %d\n", "Variable", x);
      printf("%s %p\n","Address of x", &x);

      int* ptr;
      ptr = &x;
      *ptr=200; //value at that address changed
      printf("%s %p\n", "Address of x stored in ptr", ptr);
      printf("%s %p\n","Address of Pointer", &ptr);
      printf("%d",*ptr); //dereference
    return 0;
}

