
public class CurrentAccount extends Account{

	public CurrentAccount() {
		
		NoProfitability np = new NoProfitability();
		setProfitability(np.profitability(0));
		
		YesMonthlyPayment mp = new YesMonthlyPayment();
		setMonthly_payment(mp.monthlyPayment(20));
			
		setMovement("COMPLETA");
		
		YesLimit yesLimit = new YesLimit();
		setLimit(yesLimit.limit(400));
		
	}
	
}
