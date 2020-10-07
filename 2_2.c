//Q.2.2) Guess the output of following code
#include<stdio.h>
int main()
{
	int p=100;
	p=fun(p);
	printf("\n p at line 7=%d",p);
	return(0); 
}
int fun(int p)
{
	p++; 
	printf("\n p at line 13=%d",p);
	{
		int p=200;
		printf("\n p at line 16=%d",p);
	}
	return(p);
}

