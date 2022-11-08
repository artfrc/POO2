
public class SalaryAccount extends Account{

	public SalaryAccount() {
			
		NoProfitability np = new NoProfitability();
		setProfitability(np.profitability(0));
			
		NoMonthlyPayment mp = new NoMonthlyPayment();
		setMonthly_payment(mp.monthlyPayment(0));
				
		setMovement("SIMPLIFICADA");
			
		NoLimit yesLimit = new NoLimit();
		setLimit(yesLimit.limit(0));
			
	}
	
}
