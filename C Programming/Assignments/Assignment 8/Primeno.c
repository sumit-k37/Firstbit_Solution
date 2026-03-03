//Accept array and print only prime numbers of array.

void main()
{
	int arr[5],i;					//Declaired array
	printf("enter arr ele");		//
	for(int i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);			//Given i/p ele to array from user
	}

		printf("Given array is %d \n",arr[i]);
	
for(int i=0;i<5;i++)
{
	int count=0;
	
	for(int j=1;j<=arr[i];j++)
	{
		if(arr[i]%j==0)
		{
			count++;
		}
	}
	if(count==2&& arr[i]>1)
	{
		printf("%d \n",arr[i]);
	}
	}
}