//Find factorial of given number.
//Input: n = 5
//Output: 120


void main()
{
	int n,fact=1;
	printf("Enter n=");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("Fact is %d",fact);
}