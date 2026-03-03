//int primeno();
//void main()
//{
//	int res;
//	res=primeno();
//	if(res==1)
//	printf("Prime");
//	else
//	printf("Not Prime");
//}
//
//int primeno()
//{
//	int no=124;
//	for(int i=2;i<no;i++)
//	{
//		if(no%i==0)
//		return 0;
//		else 
//		return 1;
//	}
//   }

int primeno();
void main()
{
	int res; 
res=primeno();

	if(primeno())
	printf("Prime");
	else
	printf("Not Prime");
}

int primeno()
{
	int no=128;
	for(int i=2;i<no;i++)
	{
		if(no%i==0)
		return 0;
		else 
		return 1;
	}
}