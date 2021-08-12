#include<stdio.h>
int main(){
    int x;
    scanf("%d" , &x);
    if(x>=80 && x<=100)
    {
        printf("A");
    }
    else if(x>=75 && x<=100)
    {
        printf("B+");
    }
    else if(x>=70 && x<=100)
    {
        printf("B");
    }
    else if(x>=65 && x<=100)
    {
        printf("C+");
    }
    else if(x>=60 && x<=100)
    {
        printf("C");
    }
    else if(x>=55 && x<=100)
    {
        printf("D+");
    }
     else if(x>=50 && x<=100)
    {
        printf("D");
    }
     else if(x>=0 && x<50)
    {
        printf("F");
    }
     else
    {
        printf("error");
    }
    return 0;
}