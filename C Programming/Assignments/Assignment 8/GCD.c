//#include<stdio.h>
void main()
{
	int n1,n2,rem;
	printf("Enter 2 no \n");
	scanf("%d%d",&n1,&n2);
	
	while(n2!=0)
	{
		
		rem=n1%n2;
		
		n1=n2;
		n2=rem;
	}
	printf("The rem is %d \n",rem);	
	printf("The GCD is %d \n",n1);	
	printf("The n2 is %d \n",n2);	
}