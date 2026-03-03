#include<stdio.h>
void swap(int * x,int * y)
{
	 int temp=*x;
	*x=*y;
	 *y=temp;
	 
}
int main()
{	
	int a=10;	
	int b=20;
	printf("The no. before swap are %d %d\n",a,b);
	printf("The add. are %d %d\n",&a,&b);
	
	int * p=50;
	 int c=*p;
		printf("The no is %d \n",&c);
	
swap(& a,&b);
	printf("The no. after swap are %d %d \n",a,b);
	
}

