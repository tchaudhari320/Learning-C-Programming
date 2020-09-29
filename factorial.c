#include <stdio.h>
#include<math.h>

int fact(int n)
{
	if (n <= 1)
		return (1);
	else
		return(n*fact(n-1));
}

int main()
{
	int no, result;
	printf("Enter the number");
	scanf("%d", &no);
	result = fact(no);
	printf("the factorial of number %d is=%d", no, result);
}
