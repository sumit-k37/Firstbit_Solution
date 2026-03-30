
import java.util.Scanner;
public class Positiveno
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
int no;
System.out.printf("Enter no=");
no=sc.nextInt();
if(no>0)
{
	System.out.printf("Positive");
}
else
{
	System.out.printf("negative");
}
}
}