void main()
{
	char str[]="FiRsTBit";
	int i;
	while(str[i])
	{
	
	if(str[i]>'A' && str[i]<='Z')
	{
		str[i]=str[i]+32;
		printf("Lower case %c",str[i];
	}
	else if(str[i]>'a' && str[i]<='z')
	{
		str[i]=str[i]-32;
		printf("Upper case %c",str[i];
	}
	i++;
	}
}