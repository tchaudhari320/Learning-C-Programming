#include <stdio.h>
int main()
{
   int n, sum = 0, c, array[100];

   scanf("%d", &n);

   for (c = 0; c < n; c++)
   {
      scanf("%d", &array[c]);
      sum = sum + array[c];
   }

   printf("Sum = %d\n", sum);

   return 0;
}
