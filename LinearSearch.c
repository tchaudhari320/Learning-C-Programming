#include<stdio.h>

int main()
{
	int a[5],sum=0,i;
	int search_ele;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nWhich element to search=");
	scanf("%d",&search_ele);
	
	for(i=0;i<5;i++)
	{
		if(a[i]==search_ele)
		{
			printf("\nElement found at position %d",i);
			return(0);
		}
	}
	printf("\nElement not found");
}
