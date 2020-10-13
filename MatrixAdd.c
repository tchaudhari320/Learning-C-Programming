//Matrix Addition 

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[3][3], b[3][3],c[3][3];
    int i,j;

    printf("\nEnter elements of matrix A\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("\t%d", &a[i][j]);
        }
    }
    
    printf("\nEnter elements of matrix B\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("\t%d", &b[i][j]);
        }
    }


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("After addition result matrix is:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("\t%d", c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
