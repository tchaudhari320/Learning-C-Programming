#include<stdio.h>
#include<conio.h>
#include<math.h>

void swap(int p, int q)
{
	int temp;
	temp = p;
	p = q;
	q = temp;
}


int main()
{
	int p, q;
	printf("Enter first and second number:");
	scanf("%d%d", &p, &q);
	swap(p,q);
	printf("\nAfter swapping, the first number is = %d and \t the second number is = %d", p, q);
	return 0;
}
