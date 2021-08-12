#include<stdio.h>
int main() 
{
  float num ; 
  int decimal;
  scanf("%f %d" , &num ,&decimal);
  if(decimal==1)
  {
      printf("%.1f" ,num);
  }
  else if(decimal==2)
  {
       printf("%.2f" ,num);
  }
  else if(decimal==3)
  {
       printf("%.3f" ,num);
  }
  else if(decimal==4)
  {
       printf("%.4f" ,num);
  }
  else if(decimal==5)
  {
       printf("%.5f" ,num);
  }
  else
  {
       printf("%.6f" ,num);
  }
  return 0;
}