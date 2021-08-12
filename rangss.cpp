#include<stdio.h>
int main() 
{
    double F , m , a ;
    scanf("%lf %lf" , &m , &a);
    F = m*a ;
    if(m>=0)
   {
	printf("%.6lf = %6lf x %6lf" , F , m , a);
	}
    if(m<0)
    {
    	printf("ERROR");
	}
    return 0;
}
