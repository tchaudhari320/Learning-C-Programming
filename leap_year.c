#include<stdio.h>
#include<conio.h>

int main()
{
	int year;
	printf("Enter an year");
	scanf("%d", &year);
	if (year%4 == 0)
		printf("year is a leap year");
	else if (year%4 == 0 && year%100 != 0)
		printf("year is a leap year");
	else
		printf("year is not a leap year");
		
	return(0);
}
