#include<stdio.h>
int main()	
{
	int m=-1,n;
	n=(m++ && m++) ?10:20;
	printf("%d \t %d \t", m, n);
	m=-1;
	n=(m++ && ++m) ?10:20;
	printf("%d \t %d", m, n);
    return 0;
}

