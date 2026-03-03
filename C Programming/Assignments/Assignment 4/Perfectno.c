//	3. Print perfect numbers in the given range 1 to n.
void main()
{
	int n=20;
	for(int i=1;i<=n;i++)
	{
		int sum=0;
	for(int j=1;j<=i/2;j++)
	{		
		if(i%j==0)
		{
			sum=sum+j;
		}

	}
	
		if(sum==i)
		{
			printf("%d is Perfect no \n",i);
		}
		
	}	
}
//	{
//		printf("%d Perfect no",i);
//	}
//		else
//		{
//			printf("%d Not perfect no",i);
//		}
	
