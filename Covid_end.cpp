#include<stdio.h>
int main() 
{
    int P , C , T ;
    scanf("%d" , &P);
    C = P % 4 ;
    printf("%d" , T = ((P-C)/4*249*3)+(C*249));
    return 0;
}
