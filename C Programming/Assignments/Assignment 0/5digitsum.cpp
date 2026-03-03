#include<stdio.h>
int main()
{
	int no=12345,sum=0,n;

while(no>0)
{

	n=no%10;
	sum=sum+n;
	no=no/10;
}
	printf("Sum of no is %d",sum);
return 0;	
}
