package rational;
import java.util.Scanner;

public class Rational {
    private int numerator;
    private int denominator;

    public Rational() {
        numerator = 1;
        denominator = 1;
    }
    public Rational(int numerator, int denominator) {
        this.numerator = numerator;
        this.denominator = denominator;
    }
    public int getNumerator() {
        return numerator;
    }
    public void setNumerator(int numerator) {
        this.numerator = numerator;
    }
    public int getDenominator() {
        return denominator;
    }
    public void setDenominator(int denominator) {
        this.denominator = denominator;
    }
    public Rational add(Rational r) {
        int  num = numerator * r.denominator + r.numerator * denominator;
        int denom = denominator * r.denominator;
        return new Rational(num, denom);
    }
    public Rational subtract(Rational r) {
        int num = numerator * r.denominator - r.numerator * denominator;
        int denom = denominator  * r.denominator;
        return new Rational(num, denom);
    }
    public Rational multiply(Rational r) {
        int num = numerator * r.numerator;
        int denom = denominator * r.denominator;
        return  new Rational(num, denom);
    }
    public Rational divide(Rational r) {
        int num = numerator / r.numerator;
        int denom = denominator / r.denominator;
        return new Rational(num, denom);
    }
    public String toString() {
        return "(" + numerator + "/" + denominator + ")";
    }
    
}

