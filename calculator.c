#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	int a,b;
	float result;
	char op;
	printf("Enter two nubers");
	scanf("%d%d", &a,&b);
	printf("Enter the Operation");
	scanf(" %c", &op);
	switch(op)
	{
		case '+':
				result = a+b;
				break;
			
		case '-':
				result = a-b;
				break;
			
		case '*':
				result = a*b;
				break;
			
		case '/':
				result = a/b;
				break;
			
		defaut:
			printf("wrog operation");
		
	}
	printf("The Result is=%f", result);
}
