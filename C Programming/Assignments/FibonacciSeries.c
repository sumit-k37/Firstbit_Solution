void main()
{
	int n=10,third,first=0,sec=1;
//	printf("Enter no=");
//	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
	 third=first+sec;
	 printf("%d \n",first);
	 first=sec;
	 sec=third;
	}
}





