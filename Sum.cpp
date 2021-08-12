#include<stdio.h>
int main() 
{
  long n ;
  scanf("%ld" , &n);
  if(n>0)
  {
  	printf("%ld" , (n*(n+1))/2);
  }
  else
  {
  	printf("Error");
  }
  return 0;
}
