#include<stdio.h>
#include<math.h>
int main()
{
    int side1 , side2 , side3 ;
    scanf("%d %d %d" ,  &side1 , &side2 , &side3 );
    if((pow(side3,2)==pow(side1,2)+pow(side2,2) || 
    pow(side2,2)==pow(side1,2)+pow(side3,2) || 
    pow(side1,2)==pow(side2,2)+pow(side3,2)) &&
     side1>0 && side2>0 && side3>0)
    {
        printf("\"Wow! Pythagorean theorem\"");
    }
    else
    {
        printf("\"Oh nooo!\"");
    }
    return 0 ;
}