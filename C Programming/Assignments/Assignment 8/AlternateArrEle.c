//Print alternate elements in array.
void main()
{
//	int arr[5];
//	int i;
//	int arr[]={12,13,14,17,19};	
//	int n=len(arr[i]);
	printf("Enter Array Ele= \n");
	int arr[5];
	for(int i=0;i<=4;i++)
	{
		scanf("%d",&arr[i]);
	}					
	//printf("Enter the ele=");	
	for(int i=0;i<5;i+=2)
		{
		printf("Alternate Array Ele are %d \n",arr[i]);
//		i+=2;
		}
}
 

