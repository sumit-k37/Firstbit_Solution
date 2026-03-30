#include<stdio.h>
struct product {
	char name[20];
	int price,quantity;
};

void main()
{
	struct product p[5];
	for(int i=0;i<5;i++)
	{
		printf("Product Details :");
		printf("Enter name\n");
		scanf("%s",p[i].name);
		
		printf("Enter price\n");
		scanf("%d",&p[i].price);
		printf("Enter quantity\n");
		scanf("%d",&p[i].quantity);
	}
	printf("Display Product Data");
	
	for(int i=0;i<5;i++)
	{
		printf("%s",p[i].name);
	//	printf("Enter price\n");
		printf("%d",p[i].price);
		//printf("Enter quantity\n");
		printf("%d",p[i].quantity);
	}
}