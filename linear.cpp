#include<stdio.h>
int main() 
{
    float x1 , y1 , x2 , y2 , m , c;
    scanf("%f %f,%f %f" , &x1 , &y1 , &x2 , &y2);
    m = (y2 - y1)/(x2 - x1);
    c = y1 - m*x1 ;
    printf("y=%.2fx+%.2f " , m , c);
    return 0;
}
