#include<stdio.h>
int main() 
{
  int weight , loss_weight ;
  scanf("%d" , &weight);
  loss_weight = 0.1*weight*100 ; //loss weight 10% in gram unit
	do{
		loss_weight - 200 ;
	}while(loss_weight==0);
	printf("%d" , loss_weight);
  return 0;
}
