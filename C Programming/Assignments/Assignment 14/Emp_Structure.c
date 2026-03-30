#include<stdio.h>
struct employee
{
	int id;
	char name[20];
	float salary;	
};
void main()
{
	struct employee e1,e2;
	e1.id=101;
	strcpy(e1.name,"abc");
	e1.salary=10000;
	
	printf("enter id and name salary");
	scanf("%d",&e1.id);
	scanf("%s",e2.name);
	scanf("%lf",&e2.salary);
	
	printf("Employee details are :\n ");
	printf("Emp=%d name=%s salary=%lf \n",e1.id,e1.name,e1.salary);	
	printf("Emp=%d name=%s salary=%lf \n",e2.id,e2.name,e2.salary);	
}