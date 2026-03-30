#include<stdio.h>
typedef struct std 
	{
		int rollno,mark;
		char name[20];
	} std ;
void main()
{
	std arr[5];
	for(int i=0;i<5;i++)
	{
		printf("Enter std details :");
		scanf("%d",&arr[i]);
	
		scanf("%d \n",&arr[i].rollno);
		scanf("mark=%d",&arr[i].mark);
		scanf("%s",&arr[i].name);
	}
	printf("Std Data is:");
	for(int i=0;i<5;i++)
	{
		printf("%d \n",arr[i]);
		printf("rollno= %d \n",arr[i].rollno);
		printf("mark=%d",arr[i].mark);
		printf("%s",arr[i].name);
	}
}