
void fibonaci(int n);
void main()
{
		int n;
	
	
	printf("Enter n=");
	scanf("%d",&n);
	fibonaci(n);
}

void fibonaci(int n)
{

int third,first=0,sec=1;
	for(int i=0;i<n;i++)
	{
	 third=first+sec;
	 printf("%d \n",first);
	 first=sec;
	 sec=third;
}
}