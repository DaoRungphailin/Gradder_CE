#include<stdio.h>
int main() 
{
  long double high , parallel1 , parallel2 ;
  scanf("%Lf %Lf %Lf" , &high , &parallel1 , &parallel2);
  if(high>0 && parallel1>0 && parallel2>0  &&  parallel1!=parallel2)
  {
  	printf("%.6Lf" , (1.0/2.0)*(parallel1 + parallel2)*high);
  }
  else
  {
  	printf("Error");
  }
  return 0;
}
