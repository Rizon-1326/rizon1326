import java.util.Scanner;

public class Calculate {
	public static void main(String[] args) {
		Scanner Input=new Scanner(System.in);
		System.out.println("Enter first numbers numerator and denominator : ");
		int x,y;
		x=Input.nextInt();
		y=Input.nextInt();
		Rational firstnum=new Rational(x,y);
		System.out.println("Enter second numbers numerator and denominator : ");
		x=Input.nextInt();
		y=Input.nextInt();
		Rational secondnum=new Rational(x,y);
		System.out.println("Enter any rational numbers numerator and denominator : ");
		x=Input.nextInt();
		y=Input.nextInt();
		Rational number=new Rational(x,y);
		
		
		Rational result=new Rational(0,0);
		result=result.add(firstnum,secondnum);
		System.out.println("Summation is : "+result.numerator+"/"+result.denominator);
		
		result=result.sub(firstnum,secondnum);
		System.out.println("Substraction is : "+result.numerator+"/"+result.denominator);
		
		result=result.multiply(firstnum,secondnum);
		System.out.println("Multiplication is : "+result.numerator+"/"+result.denominator);
		
		result=result.divide(firstnum,secondnum);
		System.out.println("Division is : "+result.numerator+"/"+result.denominator);
		
		System.out.println("The rational number is "+number.fractionString(number));
		
		System.out.println("The rational number in floating number is "+number.floatingString(number));
		
	}
}
