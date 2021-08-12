#include<stdio.h>
int main() 
{
    double W , L , A ;
    scanf("%lf %lf" , &W , &L);
    A = W*L ;
    if(W>=0 && L>=0)
    {
        printf("Area = %.6lf x %.6lf = %.6lf" , W , L , A);
    }
    else
    {
        printf("Error");
    }
    return 0;
}