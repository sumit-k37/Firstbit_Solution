import java.util.Scanner;
public class Percentage
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
	int marks,tmark,percentage,a,b,c,d,e;
	System.out.printf("Enter the marks of 5 subject");
	a=sc.nextInt();
	b=sc.nextInt();
	c=sc.nextInt();
	d=sc.nextInt();
	e=sc.nextInt();

	tmark=a+b+c+d+e;
	System.out.printf("Total Marks are %d  ",tmark);
	percentage=(tmark*100)/600;
	System.out.printf("Percentage of Std is %d",percentage);
}
}