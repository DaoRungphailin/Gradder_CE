#include<stdio.h>
int main() 
{
    double R , Pi ;
    Pi = 22.0/7.0 ;
    scanf("%lf" , &R);
    if(R>=0)
    {
    	printf("%.8lf" , Pi*(R*R));
	}
	else
	{
		printf("ERROR");
	}
    return 0;
}
