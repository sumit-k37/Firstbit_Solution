//4. Print strong numbers in the given range 1 to n.
void main()
{
	int n,temp;
	printf("ENter range n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
	
		int sum=0;
		temp=i;
	while(temp>0)
	{	
		int digit=temp%10;
			int fact=1;
	for(int j=1;j<=digit;j++)
		{
		fact=fact*j;		
		}
		sum=sum+fact;
		temp=temp/10;
}
//	printf("%d perfect no is",i);

	if(sum==i)
		printf("%d is Perfect no \n",i);
}
}
