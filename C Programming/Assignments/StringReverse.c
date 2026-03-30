#include<stdio.h>
void main()
{
	char s1[100];
	printf("Enter String=");
	scanf("%s",s1);
	
	int n=strlen(s1);
	
	for(int i=n-1;i>=0;i--)
	{
		printf("%c ",s1[i]);
	}
}