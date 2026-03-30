////HR (id, name, salary, commission)
//#include<stdio.h>
//typedef struct hr
//{
//	int id,salary,commission;
//	char name[20];
//}hr;
//
//void main()
//{
//	 hr h1;
//	hr arr[5];
//	for(int i=0;i<5;i++)
//	{
//	printf("Enter id,name,salary,commission");
//	scanf("%d%s%d%d",&arr[i].id,arr[i].name,&arr[i].salary,&arr[i].commission);
//	}
//	
//	for(int i=0;i<5;i++)
//	{
//	printf("The HR Details is :");
//	printf("id=%d Name=%s salary=%d commission=%d ",arr[i].id,arr[i].name,arr[i].salary,arr[i].commission);
//		
//	}
//}








////HR (id, name, salary, commission)
#include<stdio.h>
typedef struct hr
{
	int id,salary,commission;
	char name[20];
}hr;
void store(hr* arr,int size);
void display(hr* arr,int size);
void main()
{
	hr arr[5];
	store(arr,5);
	display(arr,5);
}
void store(hr* arr,int size)
{
for(int i=0;i<5;i++)
	{
	printf("Enter id,name,salary,commission");
	scanf("%d%s%d%d",&arr[i].id,arr[i].name,&arr[i].salary,&arr[i].commission);
	}
}
void display(hr* arr,int size){
	for(int i=0;i<5;i++)
	{
	printf("The HR Details is :");
	printf("id=%d Name=%s salary=%d commission=%d ",arr[i].id,arr[i].name,arr[i].salary,arr[i].commission);
		
	}
}







