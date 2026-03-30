//Write a program to print following series:
//1 + 11+ 111+ 1111+ ..... + n times 1
#include<stdio.h>
void main()
{
	int no=0;
	printf("no is=%d\n",no);
	for(int i=0;i<5;i++)
	{
		no=no*10+1;
		printf("%d",no);
		printf(" + ");
	}	
}





