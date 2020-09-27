#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	short int s = -32768;
	printf(" %d ", sizeof(s));
	printf("\t %d ", s);
	s++;
	printf("\t %d ", s);
	s = -32768;
	s--;
	printf("\t %d ", s);
	return 0;
}
