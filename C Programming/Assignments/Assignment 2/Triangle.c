#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter the 3 no's'");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a==b && b==c)
	{
		printf("This is Equilatral Triangle");
	}
	else if(a==b && b==c && c==a){
		printf("This is Isoscales triangle");
	}
	else {
		printf("Scalen Triangle ");
	}
}