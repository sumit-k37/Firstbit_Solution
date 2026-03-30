import java.util.Scanner;
public class Avgno
{

public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
	int a,b,c,d,e,avg;
	System.out.println("Enter 5 no");
	a=sc.nextInt();
	b=sc.nextInt();
	c=sc.nextInt();
	d=sc.nextInt();
	e=sc.nextInt();
	avg=(a+b+c+d+e)/5;
	System.out.println("Average is "+avg);
}
}