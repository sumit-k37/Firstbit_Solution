//1. Print armstrong numbers in the given range 1 to n.
void main()
{
	int n,no,digit,sum,cube,count,temp,i;
	
	printf("Final range n=");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
			temp=i;
			sum=0;
//		digit=i%10;
//		cube=digit*digit*digit;
//		sum=sum+cube;
		while(temp>0)
		{
		digit=temp%10;
		cube=digit*digit*digit;
		sum=sum+cube;
		temp=temp/10;	
		
		}
		if(sum==i)
	printf("The no is armstrong %d \n",i);
//	else
//	printf("Not armstg %d \n",i);
	}
}
	