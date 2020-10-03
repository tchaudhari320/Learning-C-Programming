#include<stdio.h>
int main()
{
	int a=1,b=4,c=0;
	if( a || (b=5))
		c=1;
	else
		c=2;
	printf("%d \t %d", b, c);
    return 0;
}

