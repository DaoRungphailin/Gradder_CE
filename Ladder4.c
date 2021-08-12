#include<stdio.h>
int main() 
{
    int A , B ;
    scanf("%d" , &A);
    B = A+8 ;
    printf("%o%d%x%o%d%x" , A , A , A , B , B , B);
    return 0;
}