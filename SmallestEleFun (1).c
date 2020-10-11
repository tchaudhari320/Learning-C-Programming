#include<stdio.h>

int findsmallest(int b[])
{
	int smallest=9999;
	int i;
	for(i=0;i<5;i++)
	{
		if(b[i]<=smallest)
		{
			smallest=b[i];
		}
	}
	return(smallest);
}

int main()
{
	int a[5],sum=0,i,result;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	result = findsmallest(a);
	printf("\nSmallest element is %d",result);
}
