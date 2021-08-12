#include<stdio.h>
int main()
{
	int A , B , C , D , E , F , i , j , k;
	scanf("%d %d %d %d %d %d" , &A , &B , &C , &D , &E , &F);
	i = (B*F)-(E*C);
	j = (C*D)-(A*F);
	k = (A*E)-(D*B);
	printf("(%d)i+(%d)j+(%d)k" , i , j , k);
	return 0 ;
}
