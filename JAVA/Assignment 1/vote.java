import java.util.Scanner;
public class vote
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);

	int age;
	System.out.printf("Enter age");
	age=sc.nextInt();
	if(age>=18)
	System.out.printf("Eligible for Voting");
	else
	System.out.printf("Sorry Unfortunately you are not eligible ");
}
}