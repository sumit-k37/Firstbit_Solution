//Write a program to check whether a given character is a vowel or consonant.using FUNCTION

int Alphabet(char ch);
int main()
{
	char ch;
		printf("Enter Character=");
	scanf("%c",&ch);
	int res=Alphabet( ch);
	
	if(res==1)
	printf("Vowel");
	else
	printf("Consonant");
		return 0;
}

int Alphabet(char ch)
{
	

//	char ch='S';
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	return 1;
	else
	return 0;
	
}