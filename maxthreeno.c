#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a, b, c;
	int max;
	printf("enter three numbers");
	scanf("%d%d%d", &a, &b, &c);
	if(a>=b && a>=c)
		printf("max number=%d", a);
		
	else if(b>=c && b>=a)
		printf("max number=%d", b);
		
	else
		printf("max number=%d", c);
}
