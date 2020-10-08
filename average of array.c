#include<stdio.h>
#include<conio.h>

void avg(int[]);
int main()
{
	int a[5] = {1,2,3,4,5};
	avg(a);
	return 0;
}

void avg(int n[])
{
	int  i,sum=0;
	float a;
	for(i=0; i<5; i++)
		sum = sum + n[i];
	a = sum/5.0;
	printf("Average of array is=%f", a);
}

