#include<stdio.h>
#include<math.h>

int main()
{
	int i,no;
	printf("Enter a number:");
	scanf("%d",&no);
	for(i=2;i<=sqrt(no);i++)
	{
		if(no%i==0)
		{
			printf("%d Number is not prime",no);
			return(0);
		}
	}
	printf("%d Number is a prime number",no);
	return(0);
}
