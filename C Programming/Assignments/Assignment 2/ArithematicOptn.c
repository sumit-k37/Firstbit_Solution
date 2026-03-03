import java.util.Scanner;
class Calculator 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in);
		
		//infinite loop
		
		for( ; ; ){
			
			System.out.println("\n ***********WELCOME ************");
			
			System.out.println("Enter Operand 1 :  ");
			double operand1 = sc.nextDouble();
			
			System.out.println("Enter Operator :  ");
			char operator = sc.next().charAt(0);
			
			System.out.println("Enter Operand 2 :  ");	
			double operand2 = sc.nextDouble();
			
			double output = 0;
			
			output = 
				(operator=='+')?
				(operand1+operand2):
				((operator=='-')?
				(operand1-operand2):
				((operator=='*')?
				(operand1*operand2):
				((operator=='/')?
				(operand1/operand2):
				(operator=='%')?
				(operand1%operand2):
				(Double.MAX_VALUE))));
				
				
				System.out.println();
				
				if(output==Double.MAX_VALUE)
					System.out.println("\n INVALID OPERATOR");
				else
					System.out.println(operand1+" "+operator+" "+operand2+" = "+String.format("%.3f",output));
		
		
		}	
		
	}
}