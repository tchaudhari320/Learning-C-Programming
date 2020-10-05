#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *ai[4];
    ai = (int*) malloc(sizeof(int)*4);          
    ai[3]=30;                                            
    printf("%d", ai[3]);                  
    free(ai);
    return 0;
}


// Compiler error while allocating memory
