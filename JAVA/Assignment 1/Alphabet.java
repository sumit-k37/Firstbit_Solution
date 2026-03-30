import java.util.Scanner;
public class Alphabet
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);

	char ch;
	System.out.printf("Enter the Character");
	ch=sc.next().charAt(0);
	if(ch=='a'|| ch=='e'||ch=='i'||ch=='o'||ch=='u')
		System.out.printf("Vowels %c",ch);
	else
		System.out.printf("Consonant %c",ch);


}
}