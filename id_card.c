#include<stdio.h>
int main()
{
    int id ;
    char name[10000] , category[10000] ;
    scanf("%d %c %c", &id ,&name ,&category);
    printf("++++++++++++++++++++++++++++++++++++++++\n+                                      +\n+             id: %d\t\t\t+\n+           NAME: %c\t\t\t+\n+       category: %c                  +\n+                                      +\n++++++++++++++++++++++++++++++++++++++++",id,name,category);
    return 0 ;
}