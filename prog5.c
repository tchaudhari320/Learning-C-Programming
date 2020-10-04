//Guess output if executed as => prog5 10 20 30 40
#include<stdio.h>
int main(int argc, char *argv[])
{
    printf("%s %d", argv[argc-1],atoi(argv[argc-1]));
    return 0;
}



//40  40
