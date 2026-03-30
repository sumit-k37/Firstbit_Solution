public class SumDigit
{

public static void main(String args[])
{
	int no=12345,sum=0,n;

while(no>0)
{

	n=no%10;
	sum=sum+n;
	no=no/10;
}
	System.out.println("Sum of no is %d"+sum);
	
}
}