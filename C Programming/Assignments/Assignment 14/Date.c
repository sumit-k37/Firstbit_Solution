//Date (date, month, year)
#include<stdio.h>
typedef struct date
{
	int date,month ,year;
}date;
void store(date* d,int );
void display(date* d,int );
void main()
{
	 date d[3];
	 store(d,3);
	 display(d,3);
}
void store(date* d,int size)
{
	for(int i=0;i<3;i++)
	 {	
		printf("Enter date, month, year");
		scanf("%d%d%d",&d[i].date,&d[i].month,&d[i].year);
	}
}
 void display(date* d,int size)
{
	for(int i=0;i<3;i++)
	{
	printf("Dates are :");
	printf("%d-%d-%d\n",d[i].date,d[i].month,d[i].year);
	}
}
