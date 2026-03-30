//Accept a number and check if it is divisible by 3, 5, or both.
//(Print "Divisible by 3 but not by 5" or "Divisible by 5 but not by 3" or "Divisible by
//both" or” Divisible by None”)

import java.util.Scanner;
class Calculator 
{
public static void main(String[] args) 
{
		Scanner sc = new Scanner(System.in);
	{
	int no;
	System.out.printf("Enter no=");
	no=sc.nextInt();

	if(no%3==0 && no%5==0)
	{
		System.out.printf("No=%d is div by 3 and 5 ",no);
	}
	else if(no%5==0)
	{
			System.out.printf("No=%d is div by 5 ",no);
	}
	else if(no%3==0)
	{
			System.out.printf("No=%d is div by 3 ",no);
	}
	else{
	System.out.printf("No is NOT div ",no);
	}
	
}
}

}