//Check the given number is Palindrome number or not.
//Input: n = 121
//Output: Palindrome
void main()
{
	
	int n,fn,ln;
	printf("Enter no=");
	scanf("%d",&n);
	fn=n%10;
	ln=n/100;
	if(fn==ln)
	{
		printf("%d is Palindrome",n);
	}
	else
	{
		printf("%d is Not palindrome",n);
	}
}