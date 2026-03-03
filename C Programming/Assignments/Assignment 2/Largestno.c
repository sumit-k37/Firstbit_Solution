#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter no's'");
	scanf("%d %d %d",&a,&b,&c);
		
		
	(a>b)&&(b>c)? printf("a is larger %d",a):
	(b>a)&&(b>c)?printf("b is larger %d",b):
	printf("c is larger %d",c);
//	if(a>b && b>c){
//		printf("a is largest no");
//	}
//	else if(b>c && b>a){
//		printf("b is larger ");
//	}
//	else if(c>a && c>b){
//		printf("c is largest");
//	}
}