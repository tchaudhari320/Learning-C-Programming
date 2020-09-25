#include<stdio.h>
#include<conio.h>

int main()
{
	int i;
	clrscr();
	i = 1;
	while(i<=10)
	{
		printf("%d\t", i);
		i = i++;
	}
}
