//Search the given number in array.
#include<stdio.h>
void main()
{
	int arr[8],i,flag;
	int sno;//=81;
	printf("Search no is=");
	scanf("%d",&sno);
	
	printf("Enter array ele");
	for(int i=0;i<=3;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<=3;i++)
	{
	
		if(arr[i]==sno)
		{																																																																																																																																																																				
		printf("Sno found in array index %d \n",i);
	//	printf("%d",&sno);
		int flag=1;
		break;		
		}
	if(flag=0)
	{
			printf("no no found in array index %d \n",arr[i]);
				break;  
	}
	
		              
		
	}
}
  
	
	
	
	
	
	
		