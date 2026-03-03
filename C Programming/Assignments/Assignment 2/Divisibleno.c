//Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

#include<stdio.h>
int main()
{
	int no;
	printf("Enter no=");
	scanf("%d",&no);
	if(no%3==0 && no%5==0)
	{
		printf("No=%d is div by 3 and 5 ",no);
	}
	else if(no%5==0)
	{
			printf("No=%d is div by 5 ",no);
	}
	else if(no%3==0)
	{
			printf("No=%d is div by 3 ",no);
	}
	else{
	printf("No is NOT div ",no);
	}
	return 1;
	
}