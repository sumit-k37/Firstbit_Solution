//Accept the age and check if the person is:
//Child (age < 12),Teenager (12–19),Adult (20–59),Senior (60 and above)
#include<stdio.h>
void main()
{
	int age;
	printf("ENter age=");
	scanf("%d",&age);
	if(age<12){
		printf("Child",age);
		}
	else if(age>=12 && age<=19){
		printf("Teenager",age);
	}
	else if(age>=20 && age<=59)
	{
		printf("Adult",age);
	}
	else if(age>=60){
		printf("Senior");
	}
	else
	{
		printf("Enter Valid age ");
	}
}