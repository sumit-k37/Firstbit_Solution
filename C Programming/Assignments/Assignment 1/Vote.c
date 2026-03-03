#include<stdio.h>
void main(){
	int age;
	printf("Enter age");
	scanf("%d",&age);
	if(age>=18)
	printf("Eligible for Voting");
	else
	printf("Sorry Unfortunately you are not eligible ");
}