void main()
{
	int no=123,sum=0;
	while(no>0)
	{
int	digit=no%10;
	sum=sum+digit;
	no=no/10;
	printf("The sum is %d \n",sum);
	}

}