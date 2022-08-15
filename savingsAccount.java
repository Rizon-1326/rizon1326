package Lab1;

public class SavingsAccount {
	 private static double annualInterestRate = 0;
	    private double savingsBalance;

	    public SavingsAccount(double savingsBalance) {
	        this.savingsBalance = savingsBalance;
	    }

	    public double getSavingsBalance() {
	        return savingsBalance;
	    }

	    public void calculateMonthlyInterest() {
	        savingsBalance += savingsBalance * annualInterestRate / 12;
	    }

	    public static void modifyInterestRate(double annualInterestRate) {
	        SavingsAccount.annualInterestRate = annualInterestRate;
	    }
}
