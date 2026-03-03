//Check the given number is Strong number or not.
//Input: n = 145
//Output: Strong
void main()
{
	int n=145,sum=0,fact,digit,no;
	//no=n;
	
	while(n>0)
	
	{
			digit=n%10;
			fact=1;
	
	for(int i=1;i<=digit;i++)
	{
	
		fact=fact*i;	
	}
		sum=sum+fact;
			n=n/10;
	}
	if(sum==n)
	printf("Strong no",n);
	else
	printf("Not strong no"),n;
}