#include<stdio.h>
#include<conio.h>

int main()
{
	int a;
	int b;
	printf("enter the number");
	scanf("%d", &a);
	b = a%2?1:0;
	if(b==1)
		printf("number is odd");
	else
		printf("number is even");
}
