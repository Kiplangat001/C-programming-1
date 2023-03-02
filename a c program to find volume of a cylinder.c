/*A C PROGRAM TO FIND THE VOLUME OF A CYLINDER*/
#include <stdio.h>
int main()
{
   float radius, height, volume;
   printf("Enter the radius of the cylinder: ");
   scanf("%f", &radius);
   printf("Enter the height of the cylinder: ");
   scanf("%f", &height);
   volume = 3.142 * radius * radius * height;
{
    printf("The volume of the cylinder is: %.2f", volume);
}
   return 0;
}
