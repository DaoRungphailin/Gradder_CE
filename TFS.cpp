#include<stdio.h>
int main() 
{
  int A ;
  scanf("%d" , &A);
  if(A%3!=0 && A%5!=0 && A%7!=0)
  {
  	printf("0");
  }
  else if(A%3==0 && A%5==0 && A%7==0) 
  {
  	printf("7");
  }
  else if(A%3==0 && A%5==0)
  {
  	printf("3");
  }
  else if(A%3==0 && A%7==0)
  {
  	printf("5");
  }
  else if(A%7==0 && A%5==0)
  {
  	printf("6");
  }
  else if(A%3==0)
  {
  	printf("1");
  }
  else if(A%5==0)
  {
  	printf("2");
  }
  
  else if(A%7==0)
  {
  	printf("4");
  }
  
  
  
  return 0;
}
