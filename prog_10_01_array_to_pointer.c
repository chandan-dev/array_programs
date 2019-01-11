#include <stdio.h>
 #include<conio.h>
int main () 
{
   int array[] = {1, 3, 5, 7, 89, 90, 34, 56};
   int *p;
   int i, n;
   p = array;
   n =  sizeof(array) / sizeof (array[0]);
   printf(  "by pointer:\n ");
   for ( i = 0; i < n; i++ ) 
   {
      printf( "  %d \t", *(p + i));
   }
   printf(  "\n\nby array:\n\n ");
    for ( i = 0; i < n; i++ ) 
   {
      printf( "  %d \t", array[i]);
   }
   return 0;
}
