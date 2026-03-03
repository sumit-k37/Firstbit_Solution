//Take two array and add sum in third array
void main()
{
//	int arr1[5],arr2[5],arr3[5];
	
	int arr1[]={1,2,3,4,5};
	int arr2[]={6,7,8,9,10};
	int arr3[5];
	
	for(int i=0;i<5;i++)
	{
		
	 arr3[i]=arr1[i]+arr2[i];
	printf("The  sum of array is %d \n",arr3[i]);
//	for(int j=0;j<5;j++)
//	{
//		arr3[j]=arr3[i];
//		printf("%d \n",arr3[j]);
//	}
	}
}