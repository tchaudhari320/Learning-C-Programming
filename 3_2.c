//Q.2.3) Guess the output of following code
#include<stdio.h>
int p=100;
void fun()
{
	int p=200;
	printf("\n p at line 7= %d",p);
}
void main()
{
	printf("\n p at line 11=%d",p);
	fun();
}

