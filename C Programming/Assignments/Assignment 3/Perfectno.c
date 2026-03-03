//Check the given number is Perfect number or not.
//Input: n = 28  // 1+2+4+7+14
//Output: Perfect


void main()
{
	int no,sum=0;
	printf("no=");
	scanf("%d",&no);
	
	for(int i=1;i<=no/2;i++)
	{
		if(no%i==0)
		{
			sum=sum+i;
		
		}
	
	}
	
			if(no==sum)
				printf("%d is Perfect no \n",no);
			
			else
			printf("%d is Not Perfect no \n",no);	
			
	
}