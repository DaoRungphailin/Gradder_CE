#include<stdio.h>
int main() 
{
  int m ,n ;
  scanf("%d %d", &m , &n);
  if(m>0 && n>=0)
  {
  	printf("%d" , (m-1)*n);
  }
  else if(m==0)
  {
  	printf("0");
  }
  return 0;
}
