void main()
{
if(evenodd())
	printf("Even");
	else
	printf("Odd");
}
int evenodd()
{
	int no;
	printf("Enter no=");
	scanf("%d",&no);
	if(no%2==0)
	{
	return 1;
	}
	else
	{
	return 0;
	}
}