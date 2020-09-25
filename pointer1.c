#include<stdio.h>
int main()
{
	int n=2, *ptr=&n; n*=3;
	printf("%d", (*ptr**ptr)*(*ptr**ptr));
}
