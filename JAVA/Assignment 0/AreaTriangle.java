import java.util.*;
public class Areatriangle
{

public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
	int base,height,area;

	System.out.println("Enter base and height");
	base=sc.nextInt();
	height=sc.nextInt();


	area=(base*height)/2;
	System.out.println("Area of Triangle is"+area);	
}
}