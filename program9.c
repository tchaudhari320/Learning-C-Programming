#include<stdio.h> 
int main()
{
      int a=0,b=100;
      do
      {
            --b; 
            a+=2;
      }while(a<b);
      printf("%d", a-b);
      return 0;
}
