import java.util.Scanner;
public class UpperLower
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
{
	char ch;
	System.out.printf("Enter the Character=");
	ch=sc.next().charAt(0);
	
	if(ch=='A' && ch<='Z')
	{
		System.out.printf("Uppercase");
	}
	else if(ch=='a'&& ch<='z')
	{
	
		System.out.printf("Lowercase");
	}
	else
	{
	System.out.printf("Not Valid character");
	}
}
}
}