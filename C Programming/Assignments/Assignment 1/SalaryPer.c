#include<stdio.h>
void main()
{
	int basic,salary,tsalary,da,ta,hra;
	printf("Enter basic salary  ");
	scanf("%d",&salary);
	if(salary<=5000)
	{
		da=(salary*10)/100;
		ta=(salary*20)/100;
		hra=(salary*25)/100;
		tsalary=salary+da+ta+hra;
		printf("Total salary is %d",tsalary);
	}
	else
	{
		da=(salary*15)/100;
		ta=(salary*25)/100;
		hra=(salary*30)/100;
		tsalary=salary+da+ta+hra;
		printf("Total salary is %d",tsalary);	
	}
}