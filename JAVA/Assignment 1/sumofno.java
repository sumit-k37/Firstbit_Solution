import java.util.Scanner;
public class sumofno
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
{
	int no=12345,sum=0,n;

	while(no>0)
	{

	n=no%10;
	sum=sum+n;
	no=no/10;
	
}
	System.out.printf("Sum of no is %d",sum);
}	

}}
