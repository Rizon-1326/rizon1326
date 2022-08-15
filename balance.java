package Lab1;

public class main_Saving {
public static void main(String[] args) {
	SavingsAccount saver1 = new SavingsAccount(2000);
    SavingsAccount saver2 = new SavingsAccount(3000);
    SavingsAccount.modifyInterestRate(0.04);
    for (int i = 0; i < 12; i++) {
        saver1.calculateMonthlyInterest();
        saver2.calculateMonthlyInterest();
    }
    System.out.println("Saver1: " + saver1.getSavingsBalance());
    System.out.println("Saver2: " + saver2.getSavingsBalance());
    SavingsAccount.modifyInterestRate(0.05);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    System.out.println("Saver1: " + saver1.getSavingsBalance());
    System.out.println("Saver2: " + saver2.getSavingsBalance());
	
}
}
