//Merge two arrays
void main()
{
	int n3;
	int a1[4],a2[4],a3[n3];
	printf("Enter a1 ele=");			//	int a1[5]={1,2,3,4,5};
	for(int i=0;i<4;i++)				//Size of a1=  int n1=sizeof(a1)/sizeof(a1[0])
	{
		scanf("%d",&a1[i]);
	}
	int n1=sizeof(a1)/sizeof(a1[0]);
	printf("a1 size is %d \n",n1);
	
	
	printf("Enter a2 ele=");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a2[i]);				//	int a2[5]={6,7,8,9,10};
	}									//Size of a2=  int n2=sizeof(a2)/sizeof(a2[0])
	int n2=sizeof(a2)/sizeof(a2[0]);
	printf("a2 size is %d \n",n2);
	
	
	printf("Enter a3 ele=");
	 n3=n1+n2;	
	 						
	for(int i=0;i<=n3;i++)										//a3 size= a1+a2
	{
		printf("%d",a3[i]);	
	}

}