package rational;
import java.util.Scanner;

class RationalTest {
	
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Rational a;
        Rational b;

        System.out.println("Enter numerator for the first rational number: ");
        int num1 = input.nextInt();
        System.out.println("Enter a non-zero denominator for the first rational number: ");
        int denom1 = input.nextInt();
        System.out.println("Enter a numerator for the second rational number: ");
        int num2 = input.nextInt();
        System.out.println("Enter a non-zero denominator for the second rational number: ");
        int denom2 = input.nextInt();

        a = new Rational(num1, denom1);
        b = new Rational(num2, denom2);

        System.out.println("First rational number is: " + a);
        System.out.println("Second rational number is: " + b);
        System.out.println("Addition of the rational number is: " + a.add(b));
        System.out.println("Subtraction of the rational number is: " + a.subtract(b));
        System.out.println("Multiplication of the rational number is: " + a.multiply(b));
        System.out.println("Division of the rational number is: " + a.divide(b));
        System.out.println("String representation of a Rational number "+a+"/"+b);
    }
}

