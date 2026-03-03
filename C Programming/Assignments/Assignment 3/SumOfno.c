//Find Sum of first and last digit of given number.
//Input: n = 12345
//Output: 6 (1 + 5)
void main()
{
	int n=35345,fn,ln,sum;
	fn=n%10;
	ln=n/10000;
	sum=fn+ln;
	printf("Sum of First and Last digit is %d (%d + %d)",sum,fn,ln);
}