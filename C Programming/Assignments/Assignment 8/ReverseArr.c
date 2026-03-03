//Reverse the given array.
void main()
{
	int n=5;
	int ar1[n];
	printf("Enter arr ele= \n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&ar1[i]);
	}
	//reverse arr

	printf("Reverse Array is :");
	for(int i=n-1;i>=0;i--)
	{
		printf("%d  ",ar1[i]);
	}
//	for(int i=0;i<n;i++)
//	{
//		ar2[i]=ar1[n-1-i];
//			printf("%d \n",ar2[i]);
//	}
}
