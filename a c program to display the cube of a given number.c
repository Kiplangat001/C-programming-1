/*A C PROGRAM TO DISPLAY THE CUBE OF NUMBERS*/
#include <stdio.h>
int main()
{
   int n, i;
   printf("Enter an integer: ");
   scanf("%d", &n);
   for (i = 1; i <= n; i++)
{
    printf("%d^3 = %d\n", i, i*i*i);
}
   return 0;
}
