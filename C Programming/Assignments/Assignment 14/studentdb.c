#include<stdio.h>
typedef struct student{
	int id;
	int marks;
	char name[20];
	
}student;
 student store();
void display( student);
void main(){
	 student s1,s2,s3;
	s1=store();
	  s2=store();
	 display(s1);
	
	 
	 display(s2);
}
student store(){
	 student s1;
	printf("Enter the id name & marks:");
	scanf("%d%s%d",&s1.id,s1.name,&s1.marks);
	return s1;
}
void display(student s1){
	printf("Student Details:\n");
	printf("id=%d Name=%s marks=%d",s1.id,s1.name,s1.marks);
}