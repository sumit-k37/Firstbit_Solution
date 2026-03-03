#include<stdio.h>
void main()
{
	int n1,n2,rem;
	printf("Enter 2 no");
	scanf("%d %d \n",&n1,&n2);
	while(n1>0)
	{
		rem=n1%n2;
		n1=n2;
		n2=rem;
	
	}
	printf("The GCD is %d \n",rem);	
}