#include<stdio.h>
void main()
{
	
	
	int no=123,sum=0,n;
	n=no%10;
	sum=sum+n%10;
	n=n/10;

	printf("Sum of no. is %d",sum);
}