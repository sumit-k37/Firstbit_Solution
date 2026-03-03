#include<stdio.h>
void main()
{
	char ch;
	printf("Enter the Character=");
	scanf("%c",&ch);
if(ch='A' && ch<='Z')
	{
		printf("Uppercase");
}
	else if(ch='a'&& ch<='z')
	{
	
		printf("Lowercase");
	}
else
{
	printf("Not Valid character");
}
}
