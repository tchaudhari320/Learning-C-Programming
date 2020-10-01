#include<stdio.h> 
int main()
{
	int a=10,b=3,c;
	float d;
	c=a/b;
	printf("%d\t",c);		// This displays 3
	d=a/b;
	printf("%f\t",d);		// This displays 3.000000
	d=(float)a/b;
	printf("%f\t",d);		// This displays 3.333333
	return 0;
}





