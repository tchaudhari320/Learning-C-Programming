#include<stdio.h>

int replacesmallest(int b[])
{
	int smallest=9999;
	int index;
	int i;
	for(i=0;i<5;i++)
	{
		if(b[i]<=smallest)
		{
			smallest=b[i];
			index=i;
		}
	}
	b[index]=-1;
}

int main()
{
	int a[5],sum=0,i,result;
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	result = replacesmallest(a);
	printf("\nPrinting Array again :");
	for(i=0;i<5;i++)
		printf("%d\t",a[i]);
}
