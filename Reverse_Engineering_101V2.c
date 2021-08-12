#include<stdio.h>
int main() 
{
  int Year ;
  scanf("%d" , &Year);
  if(Year<0)
  {
    printf("error");
  }
  else if(Year%4==0 && Year>=0)
  {
      printf("366");
  }
  else
  {
      printf("365");
  }
  return 0 ; 
}