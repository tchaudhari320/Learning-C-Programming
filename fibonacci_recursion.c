#include<stdio.h>
#include<conio.h>
#include<math.h>

int fib_rec(int num) 
{
   	if(num==1 || num==0)
   		return(num);
   	return(fib_rec(num-1)+fib_rec(num-2));
}
int main() {
   int terms,i;
   printf("Enter the number of terms: ");
   scanf("%d",&terms);
   printf("\nThe fibonacci series : ");
   for(i=0;i<=terms;i++)
	{
		printf("\t%d",fib_rec(i));
	}
   return 0;
}
