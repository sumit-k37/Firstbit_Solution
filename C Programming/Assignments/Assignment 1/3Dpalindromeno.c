#include<stdio.h>
void main()
{
	int no,lno,fno;
	printf("Enter no=");
	scanf("%d",&no);
	lno=no%10;
	fno=no/100;
	if(lno==fno)
	{
		printf("%d is Palindrome no",no);
	}
	else
	{
	printf("%d is Not Palindrome no",no);
	}
}