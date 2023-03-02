/*A PRODUCT FUNCTION*/
#include <stdio.h>

int product(int a, int b)
{
   return a * b;
}

int main()
{
   int a,b;
   printf("enter the value of a:\n");
   scanf("%d", &a);
   printf("enter the value of b:\n");
   scanf("%d", &b);
   int result = product(a, b);
   printf("The product of %d and %d is: %d", a, b, result);
   return 0;
}
