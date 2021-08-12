#include<stdio.h>
int main() 
{
  int num , i ; 
  if(scanf("%d" , &num)==1)
  {
     for(i=1 ; i<13 ; i++)
  {
  	printf("%d x %d = %d\n" , num , i , num*i);
  }
  }
  else
  {
    printf("Error");
  }
  return 0;
}
