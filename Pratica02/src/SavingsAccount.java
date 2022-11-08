
public class SavingsAccount extends Account{

	public SavingsAccount() {
			
			YesProfitability np = new YesProfitability();
			setProfitability(np.profitability(0.05));
			
			NoMonthlyPayment mp = new NoMonthlyPayment();
			setMonthly_payment(mp.monthlyPayment(0));
				
			setMovement("SIMPLIFICADA");
			
			NoLimit yesLimit = new NoLimit();
			setLimit(yesLimit.limit(0));
			
		}
	
}
