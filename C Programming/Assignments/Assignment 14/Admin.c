#include<stdio.h>
typedef struct admin{
	int id,salary,allovance;
	char name[20];
}admin;
admin store();
void display( admin );
void main()
{
 admin a1;
	a1=store();
	display(a1);
}

void display( admin a1)
{
	printf("Emp Details is:");
	printf("id=%d name=%s salary=%d allovance=%d \n",a1.id,a1.name,a1.salary,a1.allovance);
}

 admin store()
{
	 admin b1;
	printf("Enter id,name ,salary,allovance");
	scanf("%d%s%d%d",&b1.id,b1.name,&b1.salary,&b1.allovance);
	return b1;
}
