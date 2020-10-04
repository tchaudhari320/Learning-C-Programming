//Guess output of following code. 
#include <stdio.h>
int main()
{
    FILE *fptr;
	char ch;
	fptr = fopen("file2.txt", "rw");
	while((ch = getc(fptr))!=EOF)
	        printf("%c", ch);
	fclose(fptr);
	return 0;
}


// Welcome Everyone
