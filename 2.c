//Guess output of following code. 
#include <stdio.h>
int main()
{
    FILE *fptr;
	unsigned char ch;
	fptr = fopen("file2.txt", "rw");
	while((ch = getc(fptr))!=EOF)
	        printf("%c", ch);
	fclose(fptr);
	return 0;
}


// Program goes in infinite loop 
