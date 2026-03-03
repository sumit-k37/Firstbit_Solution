//2. Print prime numbers in the given range 1 to n.
void main()
{
	int n;
	printf("Enter range n=");
	scanf("%d",&n);
	printf("The Prime no. are \n");
		for(int i=2;i<=n;i++)
		{
			if(i%2!=0)
			{
				printf("%d \n ",i);
			}
		}
}