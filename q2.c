#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m;
    printf("%d", *m);
	m = (int *)malloc(sizeof(int));
    *m=100;
    printf("%d ", *m);
    free(m);
    return 0;
}


// Segmentation fault 
