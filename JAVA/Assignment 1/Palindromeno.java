import java.util.Scanner;
public class Palindromeno
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
	int no,lno,fno;
	System.out.printf("Enter no=");
	no=sc.nextInt();
	lno=no%10;
	fno=no/100;
	if(lno==fno)
	{
		System.out.printf("%d is Palindrome no",no);
	}
	else
	{
	System.out.printf("%d is Not Palindrome no",no);
	}
}
}