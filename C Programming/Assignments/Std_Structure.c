#include<stdio.h>
struct std 
{
	int rollno;
	char name[20];
	float salary;
};
void main()
{
	struct std a,b;
	printf("The a Std Details:");
	printf("Enter rollno=");
	scanf("%d",&a.rollno);
	
	strcpy(a.name,"Sumit");
	a.salary=50000;
	
	printf("2. Std Details :");
	printf("Enter rollno , Name, Salary");
	scanf("%d",&b.rollno);
	scanf("%s",&b.name);
	scanf("%f",&b.salary);
	
	printf("Roll no is =%d \n",a.rollno);
		printf("Name is =%s \n",a.name);
			printf("salary is %f \n",a.salary);
			printf("rollno=%d  name=%s salary=%f \n ",b.rollno ,b.name, b.salary);
	
//	if(a.salary>b.salary){
//	printf(a.salary);
//	}
//	else
//	{
//		printf(b.salary);
//	}
	
}