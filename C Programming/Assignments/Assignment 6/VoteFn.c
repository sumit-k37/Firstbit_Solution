int vote();

int main()
{
	int res;
	res=vote();
	if(res==1)
	printf("Eligible for Vote");
	else
	printf("Not eligible");
	
	
}

int vote()
{
	int age;
	printf("Enter age=");
	scanf("%d",&age);
	if(age>=18)
	return 1;
	else
	return 0;
		
}