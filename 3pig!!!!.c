#include<stdio.h>
int main()
{
    int A[3];
    scanf("%d %d %d" , &A[0] , &A[1] , &A[2]);
    for(int i=0; i<2 ; i++)
    {
        if(i<2 && A[i]>A[i+1])
        {
            int temp = A[i+1] ;
            A[i+1] = A[i] ;
            A[i] = temp;
            i = -1 ;
        }
    }
    printf("%d" , A[1]);
}