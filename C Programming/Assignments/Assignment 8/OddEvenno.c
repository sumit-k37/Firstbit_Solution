//Find odd and even among the numbers.

void main()
{
	int arr[4];
	int n,count;
	printf("Enter array size");
	scanf("%d",&n);	
	printf("Enter the array ele=");
	for(int i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
		
		if(arr[i]%2==0)
		{
			printf("Even no %d \n",arr[i]);
			count++;	
			
		}
		else
			{
			printf("Odd no %d \n",arr[i]);
			count++;
		
			}
			
	}
	printf("Count no of even is %d \n",count);
		printf("Count no of even is %d \n",count);	
}