//Write a program to count number of words in a string.
#include<stdio.h>
#include<string.h>
void main()
{
	int count;
	char name[20]="Firstbit";
	int n=strlen(name);
	for(int i=0;i<n;i++)
	{
		if(name[i]!='\0')
		{
			count++;
		}
	}
	printf("count is %d \n",count);
}