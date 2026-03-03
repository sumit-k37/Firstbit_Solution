//Accept the price from user. Ask the user if he is a student (user may say y or n). If he
//is a student and he has purchased more than 500 than discount is 20% otherwise
//discount is 10%.But if he is not a student then if he has purchased more than 600
//discount is 15% otherwise there is not discount.

#include<stdio.h>
void main()
{
	int price,discount;
	char user,Student;
	printf("Enter the Price");
	scanf("%d",&price);
	
	printf("Is user Student yes/no)");
	scanf(" %c",&user);
	if(user==Student)
	{
		if(price>=500)
		{
		
		discount=(price*20)/100;
		price=price-discount;
		printf("The Final price is %d",&price);
		}
		
		else 
		{
		discount=(price*10)/100;
		price=price-discount;
		printf("The Final price is %d",price);
		}
	}
else 
	 {
	 	if(price>=600)
		{
		discount=(price*15)/100;
		price=price-discount;
		printf("The Final price is %d",price);
		}
		
		else 
		{
		discount=(price*15)/100;
		price=price-discount;
		printf("The Final price is %d",price);
		}
	}
else
	
		printf("Your final Amount is %d",price);
	
}