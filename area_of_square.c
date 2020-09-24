#include<stdio.h>
#include<conio.h>

int main()
{
	float side;
	float area;
	printf("Enter the side of shape");
	scanf("%f", &side);
	area = side*side;
	printf("Area of shape=%f", area);
}
