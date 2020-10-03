#include<stdio.h>
int main()
{
	int p=-1, q=-2, r;
	r=-p++*++q;
	printf("%d \t %d \t %d", p, q, r);
    return 0;
}

