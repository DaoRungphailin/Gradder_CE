#include<stdio.h>
int main() 
{
    long A;
    scanf("%ld" , &A);
    if(A%2==0)
    {
    	printf("even");
	}
	else if(A%2!=0)
	{
		printf("odd");
	}
	else if(A<=0)
	{
		printf("Error");
	}
    return 0;
}
