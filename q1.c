#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *m;
    m = (int *)malloc(sizeof(int));
    *m=100;
    printf("%d ", *m);
    free(m);
    printf("%d", *m);
    return 0;
}


// 100 Garbage 
