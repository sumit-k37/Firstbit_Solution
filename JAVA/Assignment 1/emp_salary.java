import java.util.Scanner;
public class emp_salary
{
public static void main(String args[])
{
Scanner sc=new Scanner(System.in);
{
	int basic,salary,tsalary,da,ta,hra;
	System.out.printf("Enter basic salary  ");
	salary=sc.nextInt();
	if(salary<=5000)
	{
		da=(salary*10)/100;
		ta=(salary*20)/100;
		hra=(salary*25)/100;
		tsalary=salary+da+ta+hra;
		System.out.printf("Total salary is %d",tsalary);
	}
	else
	{
		da=(salary*15)/100;
		ta=(salary*25)/100;
		hra=(salary*30)/100;
		tsalary=salary+da+ta+hra;
		System.out.printf("Total salary is %d",tsalary);	
	}
}
}
}