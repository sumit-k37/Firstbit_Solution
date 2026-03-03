#include<stdio.h>
void main()
{
	int no;
	printf("no=");
	scanf("%d",no);
	
	for(int i=2;i<=no/2;i++)
	{

		printf("Prime no is %d",no%i==0);
	}
	printf("Not Prime %d",no);
}