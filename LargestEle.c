#include<stdio.h>

int main()
{
	int a[5],sum=0,i;
	int largest_index=-1;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	int largest=a[0];
	for(i=0;i<5;i++)
	{
		if(a[i]>=largest)
		{
			largest=a[i];
			largest_index=i;
		}
	}
	printf("\nLargest element is %d and found at index %d",largest,largest_index);
}
