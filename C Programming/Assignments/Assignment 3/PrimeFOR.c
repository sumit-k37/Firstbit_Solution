//Check the given number is prime or not.
//Input: n = 7
//Output: Prime
#include<stdio.h>
void main()
{
	int n,flag=0,i,n1;
	printf("Enter n=");
	scanf("%d",&n);

	for(i=2;i<=n/2;i++)
	{
	if(n%i==0){
	
		flag=1;
		break;
	}
}
	if(flag==0)
		printf("%d is Prime",n);
	else
		printf("%d is not prime",n);
	
}