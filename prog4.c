//Guess output if executed as => prog4 10 20 30 40
#include<stdio.h>
int main(int argc, char *argv[])
{
    int a, b=0;
    for(a=1; a<argc; a++)
	    b+=atoi(argv[a]);
    printf("%d", b);
    return 0;
}



//60
