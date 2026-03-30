void main()
{
	
	char str1[]=" Sumit Kaulage";
	char str[]="Sumit";
	char s[]="Sumit";
	
	char str2[50];
	char str3[60];
	char str4[20]=" Engg. Student";
	char str5[]="Pandharpurkar";
	printf("1.Length of String %d : \n",strlen(str1));
	
	printf("2. String Copy fn %s :\n",strcpy(str2,str1));	
	printf("3. String strncpy : %s  \n",strncpy(str3,str1,5));	
	printf("4.String Concatination %s \n",strcat(str4,str1));
	printf("5.String n Concatination %s \n",strncat(str1,str4,40));
	
	printf("6. String Compaire %d \n ",strcmp(str4,str));
	printf("7. String n Compaire %d \n ",strncmp(str,str1,3));
	
	printf("8. String Character 1st %s \n",strchr(str,'u'));
	printf("9. String R Character %s \n",strrchr(str5,'p'));
	printf("10. String Substring %s \n",strstr(str,"Sum"));
}