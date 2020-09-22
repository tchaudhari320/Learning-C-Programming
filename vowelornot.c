#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
	char ch;
	printf("Enter a character");
	scanf("%c", &ch);
	if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u' )
		printf("It is a vowel %c", ch);
	else
		printf("its not a Vowel %c", ch);
}
