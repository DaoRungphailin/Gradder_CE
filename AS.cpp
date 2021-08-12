#include<stdio.h>
int main() 
{
	int n ;
    double x , y , A ;
    scanf("%lf %lf %d" , &x , &y , &n);
    A = x + (n-1)*(y-x);
    printf("%.6lf" , A);
    return 0;
}
