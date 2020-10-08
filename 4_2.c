//Q.2.4) Guess the output of following code
#include<stdio.h>
int p=100;
void fun()
{
	p=200;
	p++;
}
void main()
{
	p++;
	fun();
	p+=100;
	fun();
	printf("%d",p);
}

