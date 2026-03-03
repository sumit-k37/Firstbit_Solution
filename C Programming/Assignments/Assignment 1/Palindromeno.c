#include<stdio.h>
void main()
{
	int no=121,revno=0,n;
while(no>0)
	{
		n=no%10;
		revno=revno*10+n;
		if(no==revno)
			printf("Palindrome");
		else
			printf("Not Palindrome");
	}
}