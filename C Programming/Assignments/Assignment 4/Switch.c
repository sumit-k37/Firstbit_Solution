//5. Write a menu driven program to take a number for user and perform operations as follows.
//
//Press 1.To check number is even or odd.
//2.To check number is prime or not.
//3.To check number is pallindrome or not.
//4.To check number is positive, negative or zero.
//5.To reverse a number.
//6.To find sum of digits.

#include<stdio.h>
void main()
{
	int no,ch,fd,ld,sum=0,n;
	
	printf("Enter no=");
	scanf("%d",&no);
	
	printf("Press 1.To check number is even or odd.\n");
	printf("2.To check number is prime or not.\n");
	printf("3.To check number is pallindrome or not.\n");
	printf("4.To check number is positive, negative or zero.\n");
	printf("5.To reverse a number.\n");
	printf("6.To find sum of digits.\n");
	
	printf("Enter your Choice \n");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
			if(no%2==0)
			{
				printf("Even");
			}
			else
			{
				printf("Odd");
			}
			break;
			
		case 2:
			if(no!=0)
			{
				printf("Prime");
			}
			else
			{
				printf("Not prime");
			}
			break;
			
		case 3:
			while(no>0)
			{
				ld=no%10;
				fd=no/100;
		
				if(ld==fd)
				{
					printf("Palindrome");
				}
				else
				{				
				printf("Not Palindrome");
				}
			break;
			}	
			
		case 4:
			if(no==0)
			{
				printf("No. is Zero");
			}
			else if(no>0)
			{
				printf("No. is Positive");
			}
			else if(no<0)
			{
				printf("No. is Negative");
			}
			else
			{
				printf("Enter valid no");
			}
			break;
		
		case 5:
			//reverse no
			while(no>0)
			{
			int digit=no%10;
			int rev=rev*10+digit;
			no=no/10;
					printf("Reverse no is=%d \n",rev);	
			
			}			
			break;
			
		case 6:
			
			//6.To find sum of digits
			while(no>0)		//12
			{
			n=no%10;		//2  1
			sum=sum+n;		//2		3
			no=no/10;				//0
		
//			printf("Sum of digit is %d \n",sum);
			}
			printf("Sum of digit is %d \n",sum);
			break;
			
	default:
	printf("Enter Valid Number ");
		
	}	
}