#include<stdio.h>
#include<math.h>
int main() 
{
  double weight , high , BMI;
  scanf("%lf %lf" , &weight , &high);
  BMI = weight/pow((high/100),2);
  printf("%.6lf\n" , BMI);
  if(BMI>=30)
  {
  	printf("Obesity");
  }
  else if(BMI>=25)
  {
  	printf("Overweight");
  }
  else if(BMI>=18.5)
  {
  	printf("Normal");
  }
  else if(BMI>0)
  {
  	printf("Underweight");
  }
  return 0;
}
