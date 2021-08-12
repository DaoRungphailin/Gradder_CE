#include<stdio.h>
#include<math.h>
int main()
{
	double x , y , n , r , a;
	scanf("%lf %lf %lf" , &x , &y , &n);
	r = y/x ;
	a = n-1 ;
	if(n>0 && x!=0)
	{
		printf("%.6lf" , x*pow(r,a));
	}
	else if(n<=0)
	{
		printf("ERROR");
	}
	else if(x=0)
	{
		printf("ERROR");
	}
	return 0;
}
