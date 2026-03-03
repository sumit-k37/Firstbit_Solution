//Sum of numbers in given range.
//Find sum of numbers from start to end.
//Input: start = 1, end = 5
//Output: 15

//Take start and end
//Initialize sum = 0
//Run loop from start to end
//Add each number to sum

#include<stdio.h>
void main()
{
	int first,last,sum=0;
	printf("First and last no=");
	scanf("%d %d",&first,&last);
	for(int i=first;i<=last;i++)
	{
		sum=sum+i;
	}
	printf("Sum is %d",sum);
}