#include<stdio.h>
#include<conio.h>

void fib_iter(int num) 
{
   int i, first = 0, second = 1, next = 0;
   for(i = 1; i <= num; i++) 
   {
      next = first  + second;
      first = second;
      second = next;
      printf("\t%d",next);
   }
}

int main()
{
   int terms;
   printf("Enter the number of terms: ");
   scanf("%d",&terms);
   printf("\nThe fibonacci series : ");
   fib_iter(terms);
   return 0;
}
