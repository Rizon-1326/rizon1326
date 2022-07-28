package lav_2;

	public class Rational {
		int numerator;
		int denominator;
		public Rational add(Rational firstnum,Rational secondnum) {
			int numerator =firstnum.numerator*secondnum.denominator+secondnum.numerator*firstnum.denominator;
			int denominator = firstnum.denominator*secondnum.denominator;
			
			Rational rational = new Rational();
			rational.numerator=numerator;
			rational.denominator=denominator;
			return rational;
			}
		public Rational sub(Rational firstnum,Rational secondnum) {
			int numerator =firstnum.numerator*secondnum.denominator-secondnum.numerator*firstnum.denominator;
			int denominator = firstnum.denominator*secondnum.denominator;
			
			Rational rational = new Rational();
			rational.numerator=numerator;
			rational.denominator=denominator;
			return rational;
			}
		public Rational multiply(Rational firstnum,Rational secondnum) {
			int numerator =firstnum.numerator*secondnum.numerator;
			int denominator = firstnum.denominator*secondnum.denominator;
			
			Rational rational = new Rational();
			rational.numerator=numerator;
			rational.denominator=denominator;
			return rational;
			}
		public Rational divide(Rational firstnum,Rational secondnum) {
			int numerator =firstnum.numerator*secondnum.denominator;
			int denominator = firstnum.denominator*secondnum.numerator;
			
			Rational rational = new Rational();
			rational.numerator=numerator;
			rational.denominator=denominator;
			return rational;
			}
	} 
