import java.util.Scanner;
public class AreaCircle
{
public static void main(String args[])
 {
Scanner sc=new Scanner(System.in);
    int r;
    double area;

System.out.println("Enter r = ");
   r=sc.nextInt();
    area = 3.14 * r * r;

    System.out.println("Area is "+ area);

    }
}