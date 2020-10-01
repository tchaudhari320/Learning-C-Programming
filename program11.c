#include<stdio.h>
#include<conio.h>

int func(int p)
{
	if (p<=1)
		return 0;
	printf("%d   ", p);
	func(p/2);
	return(1);
	
}

void main()
{
	int p = 50;
	printf("%d", func(p));
}
