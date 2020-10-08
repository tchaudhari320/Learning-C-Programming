//Q.2.6) Guess the output of following code
#include<stdio.h>
void recfun()
{
	static int p=5;
	if(p)
	{
		printf("%d ",p);
		p--;
		recfun();
	}
}
void main()
{
	recfun();
}

