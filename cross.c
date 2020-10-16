#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,k=1,j;

    for( i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j==i||j==6-i)
            {
            printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
