#include<stdio.h>
#include<math.h>
int main()
{
    float a , b , c , x1 , x2 ;
    scanf("%f %f %f" , &a , &b , &c);
    x1 = (-b - sqrt(b*b-4*a*c))/2*a ;
    x2 = (-b + sqrt(b*b-4*a*c))/2*a ;
    if(b*b-4*a*c<0 && a!=0)
    {
        printf("Error");
    }
    else if(b*b-4*a*c==0 && a!=0)
    {
        printf("x = %.2f" , x1);
    }
    else if(b*b-4*a*c>0 && a!=0)
    {
        printf("x1 = %.2f, x2 = %.2f" , x1 , x2);
    }
}