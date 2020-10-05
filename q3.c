#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *w;
    w = (char *)malloc(sizeof(char));
    printf("%d %d", sizeof(w), sizeof(*w));
    free(w);
    return 0;
}


// 8  1
