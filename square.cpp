#include<stdio.h>
int main() 
{
  long n , l;
  scanf("%ld %ld", &n , &l);
  if(n>0 && l>0)
  {
  printf("%ld" , n*l*l);
  }
  else
  {
  	printf("Error");
  }
  
  return 0;
}
