//Write a program to check 3 digit no. is palindrome or not using Function
int palindromeno();

int main()
{
	int res=palindromeno();
	if(res==0)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}	
		
}

int palindromeno()
{
	int no=121;
	int lno=no%10;
	int fno=no/100;
	if(lno==fno)
	return 0;
	else
	return 1;

}