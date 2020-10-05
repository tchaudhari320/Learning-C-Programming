#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *cptr;
    *cptr = (char)malloc(25);
    strcpy(cptr, "POOL");
    printf("%s", cptr);
    free(cptr);
    return 0;
}


// Segmentation fault 
