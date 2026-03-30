#include<stdio.h>
void main()
{
		int i,min;
	int arr[5];//={10,20,30,40,50};
	printf("ENter 5 arr ale");
	for(int j=0;j<=4;j++)
	{
		scanf("%d",&arr[j]);
	
	}
		int max=arr[0];
		min=arr[0];
		
	for(int j=1;j<=4;j++)
	{
		while(max<arr[j])
		{
		max=arr[j];
		}	
		while(min>arr[j])
		{
			min=arr[j];
		}
	}
	printf("The max ele is %d \n",max);
	printf("The min ele is %d \n",min);
}	
