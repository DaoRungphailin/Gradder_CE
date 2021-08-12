#include<stdio.h>
int main() 
{
  int P ; //P=Point
  scanf("%d" ,&P);
  if(P>=80 && P<=100)
  {
  	printf("A");
  }
  else if(P>=75  && P<=100)
  {
  	printf("B+");
  }
  else if(P>=70  && P<=100)
  {
  	printf("B");
  }
  else if(P>=65  && P<=100)
  {
  	printf("C+");
  }
  else if(P>=60 && P<=100)
  {
  	printf("C");
  }
  else if(P>=55 && P<=100)
  {
  	printf("D+");
  }
  else if(P>=50 && P<=100)
  {
  	printf("D");
  }
  else if(P>=0 && P<=100)
  {
  	printf("F");
  }
  else 
  {
  	printf("ERROR"); 
  }
  return 0;
}
