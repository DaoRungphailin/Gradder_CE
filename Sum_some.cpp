#include<stdio.h>
int main() 
{
  int a , b , sum , i;
  scanf("%d %d" , &a , &b);
  for(i=a ;i<=b;i++)
  {
    sum=sum+i ;
    printf("%d" , sum);
  }
  return 0 ; 
}
