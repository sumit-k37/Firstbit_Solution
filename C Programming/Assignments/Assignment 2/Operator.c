#include<stdio.h>
void main()
{
	int a ,b,c,no;
	char op;
	printf("Enter no's =");
	scanf("%d %d",&a,&b);
	
	printf("Enter Operator");
	printf("Operator=(+-*/%)");
	scanf(" %c",&op);
	
	if(op=='+'){
		c=a+b;
		printf("Sum %d %d is %d",a,b,c); //Sum of 10 and 20 is 30
	}
	else if(op=='-'){
		c=a-b;
		printf("Substraction is %d",c);
	}
	else if(op=='*'){
		c=a*b;
		printf("Multiplication is %d",c);
	}
	else if(op=='/'){
		c=a/b;
		printf("Div is %d",c);
	}
	else if(op=='%')
	{
		c=a%b;
		printf("Modulus is %d",c);
	}
	else
	{
	printf("Invalid Operation");
}
}