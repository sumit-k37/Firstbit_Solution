#include<stdio.h>
void main()
{
	int marks,tmark,percentage,a,b,c,d,e;
	printf("Enter the marks of 5 subject");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	tmark=a+b+c+d+e;
	printf("Total Marks are %d \n",tmark);
	percentage=(tmark*100)/600;
	printf("Percentage of Std is %d",percentage);
}