#include<stdio.h>
struct Employee {
	char name[100];
	int age ;
	float salary ;
	char gender[100] ;
}manager;
int main(){
	struct Employee manager = {"Elon Musk" , 49 , 9999999 , 'M'};
	return 0 ;
}

