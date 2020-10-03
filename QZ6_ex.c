//QZ1.5) Guess output of following code 
#include<stdio.h> 
int main()
{
  	int s=25;
 	while (s<=80)
 	{
 		printf("%d", s);
 		if (s>7)
 			goto location1;
 		s++;
    }
    return 0;
}
fun()
{
 	location1:
 		printf("Hello");
}





