
public class Main {

	public static void main(String[] args) {
		
		CurrentAccount currentAccount = new CurrentAccount();
		SalaryAccount salaryAccount = new SalaryAccount();
		// SavingsAccount savingsAccount = new SavingsAccount();
		// InvestimentAccount investimentAccount = new InvestimentAccount();
		
		System.out.printf(">> CURRENT ACCOUNT\n\n");
		
		double profitability = currentAccount.getProfitability();
		double mp = currentAccount.getMonthly_payment();
		String mv = currentAccount.getMovement();
		double lm = currentAccount.getLimit();
		
		System.out.println("Profitability = " + profitability);
		System.out.println("MP = " + mp);
		System.out.println("Movement = " + mv);
		System.out.println("Limit = " + lm);
		
		currentAccount.setProfitability(50);
		
		profitability = currentAccount.getProfitability();		
		System.out.println("Profitability = " + profitability);
		currentAccount.getMovement();

		System.out.printf("\n>> SALARY ACCOUNT\n\n");
		
		profitability = salaryAccount.getProfitability();
		mp = salaryAccount.getMonthly_payment();
		mv = salaryAccount.getMovement();
		lm = salaryAccount.getLimit();


		System.out.println("Profitability = " + profitability);
		System.out.println("MP = " + mp);
		System.out.println("Movement = " + mv);
		System.out.println("Limit = " + lm);
		
		salaryAccount.setProfitability(50);
		
		profitability = salaryAccount.getProfitability();		
		System.out.println("Profitability = " + profitability);
			
	}
	
}
