int mystrcmp(char *,char*);
void main()
{	
	char str1[]="abcd";
	char str2[]="abcx";
	int res=mystrcmp(str1,str2);
	
	if(res==0)
	printf("Strings are Same");
	else if(res==1)
	printf("Str1 greater");
	else
	printf("str2 greater");
	return 0;
}
int mystrcmp(char* str1,char* str2)
{
	int i=0;
	while(str1[i]!='\0' || str2[i]!='\0')
	{	
	if(str1[i]!=str2[i])
	{
		if(str1[i]>str2[i])
		return 1;
		else	return -1;
	}
	i++;
	}

}

//
//
//if(str1[i]==str2[i])
//	return 0;	
//	
//	else if(str1[i]>str2[i])
//	return 1;
//		else return -1;