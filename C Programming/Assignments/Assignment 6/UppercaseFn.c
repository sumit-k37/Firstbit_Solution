int uppercase();
int lowercase();
int main()
{
	
	int res;
	int r;
	res=uppercase();
	r=lowercase();
	if(res==1)
	printf("Uppercase");
	else
	printf("Lowercase");
	if(r==1)
	printf("Uppercase");
	else
	printf("Lowercase");
	
}

int uppercase()
{
	int ch;
	printf("Enter Char=");
	scanf("%c",&ch);
	for(char i='A';i<='Z';i++)
	{
		return 1;
	}	


int lowercase()
{
	int ch;
	printf("Enter Char=");
	scanf("%c",&ch);
	for(char i='a';i<='z';i++)
	{
		return 1;
	}	

}}