void main()
{
	int n1=2332534,n2=13524;
	while(n2!=0)
	{
		int temp=n2;
		n2=n1%n2;
		n1=temp;
	}
	printf("%d",n1);
}