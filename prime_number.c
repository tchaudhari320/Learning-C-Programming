#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int number,i;
	printf("Enter the number");
	scanf("%d", &number);
	for (i=2; i<=sqrt(number); i++)
	{
		if (number%i==0)
		{
			printf("number is prime");
			return (0);
		}
	printf("Given Number is a Prime Number");	
	}
}
