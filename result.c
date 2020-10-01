#include<stdio.h>
#include<conio.h>
int main()
{
	int marks;
	printf("enter your marks");
	if(marks>=40)
	{
		printf("You are passed=%d", marks);
		scanf("%d", &marks);
		if(marks>=75)
		{
			printf("wow! You got distinction=%d", marks);
			scanf("%d", &marks);
		}
	}
}
