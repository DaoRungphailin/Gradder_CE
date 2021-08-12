#include<stdio.h>
int main() 
{
  float x1, y1, x2, y2 , A , B ;
  scanf("%f %f %f %f" , &x1, &y1, &x2, &y2 );
  A = (x1+x2)/2 ;
  B = (y1+y2)/2 ;
  printf("X=%.2f\nY=%.2f", A , B);
  return 0;
}
