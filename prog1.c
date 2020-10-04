//Guess output if executed as => prog1 Welcome 123 Bye 456
#include<stdio.h>
int main(int argc, char **argv)
{
	printf("%d %s %s", argc, *argv, argv[0]);
	printf("\n%s %c %c", argv[1],**argv, *argv[1]);
	return 0;
}

//5 prog1 prog1
//Welcome p W
