void main()
{
	for(int i=1;i<5;i++)
	{
		somefun();
	}
}
void somefun()
{
	int* p=(int*) malloc(50);
	p[0]=10;
	printf("%d",p[0]);
}