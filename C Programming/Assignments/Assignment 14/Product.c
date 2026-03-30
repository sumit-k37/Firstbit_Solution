//Product (id, name, quantity, price)
//In void main()
//Using function (store , display) -> pass by value
//-> pass by address (array)
//-> pass one structure variable to function by address
#include<stdio.h>
typedef struct product
{
	int id,quantity,price;
	char name[25];
}product;

void store(product*,int );
void display(product* ,int);
void main()
{	
	 product p[3];
	store(p,3);
	display(p,3);
}
	
void store(product* p,int size )
{
	for(int i=0;i<=size;i++)
	{
	printf("Enter the product details:id, name, quantity, price");
	scanf("%d%s%d%d",&p[i].id,p[i].name,&p[i].quantity,&p[i].price);
	}
}

void display(product* p,int size)
{
	printf("Show product details :");
	for(int i=0;i<=size;i++)
	{
	printf("id=%d name=%s quantity=%d price=%d\n",p[i].id,p[i].name,p[i].quantity,p[i].price);
	}

}