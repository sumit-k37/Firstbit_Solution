//SalesManager (id, name, salary, incentive, target)
#include<stdio.h>
typedef struct salesManager
{
	int id,salary,incentive, target;
	char name[20];
}salesManager;
	void store(salesManager*  , int );
	void display(salesManager* ,int );
void main()
{
salesManager s1[5]; 
//	salesManager arr[5];
	store(s1,5);
	display(s1,5);
	
}
void store(salesManager* s1,int size)
{
	for(int i=0;i<3;i++)
	{
	printf("Enter the salesManager Details id ,name, salary, incentive, target:");
	scanf("%d%d%d%d%s",&s1[i].id,&s1[i].salary,&s1[i].incentive,&s1[i].target,s1[i].name);
	}
}
void display(salesManager* s1,int size)
{
	for(int i=0;i<3;i++)
	{
	printf("salesManager Details :");
	printf("%d%d%d%d%s",s1[i].id,s1[i].salary,s1[i].incentive,s1[i].target,s1[i].name);
}
}
