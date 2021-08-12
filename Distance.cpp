#include<stdio.h>
#include<math.h>
int main() 
{
  int x1 , y1 , x2 , y2 , A , B ;
  scanf("%d, %d\n%d, %d" , &x1 , &y1 , &x2 , &y2);
  A = pow((x1 - x2),2) ;
  B = pow((y1 - y2),2) ;
  printf("%.6f" , sqrt(A+B));
  return 0;
}
