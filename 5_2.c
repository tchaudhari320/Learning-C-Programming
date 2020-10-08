//Q.2.5) Guess the output of following code
#include<stdio.h>
void recfun()
{
	int p=5;
	if(p)
	{
		printf("%d",p);
		p--;
		recfun();
	}
}
void main()
{
	recfun();
}

