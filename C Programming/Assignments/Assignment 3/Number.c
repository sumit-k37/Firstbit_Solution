//Check the given number is Armstrong number or not..
//Input: n = 153
//Output: Armstrong
#include<stdio.h>
void main()
{
	int no,sum=0,digit,cube,temp;
	printf("Enter no=");
	scanf("%d",&no); 		//153 
	temp=no;
	while(no>0){
	
	digit=no%10; //3 ,5, 1
	cube=digit*digit*digit;		//27  125
	sum=sum+cube;				//0+27=27
	no=no/10;					//15
}

	if(sum==temp)
	 printf("%d is Armstring no",temp);
	else
	printf("%d is Not armstrong no",temp);
	
}