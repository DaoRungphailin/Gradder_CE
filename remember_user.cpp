#include<stdio.h>
int main() 
{
    char str[100000];
    scanf("%[^\n]" , str);
    printf("Hello %s \\(\"^\")/!!!" ,str);
    return 0;
}
