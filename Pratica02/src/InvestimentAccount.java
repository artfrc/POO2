
public class InvestimentAccount extends Account{

	public InvestimentAccount() {
			
		YesProfitability np = new YesProfitability();
		setProfitability(np.profitability(0));
		
		NoMonthlyPayment mp = new NoMonthlyPayment();
		setMonthly_payment(mp.monthlyPayment(20));
			
		setMovement("COMPLETA");
			
		NoLimit yesLimit = new NoLimit();
		setLimit(yesLimit.limit(400));
			
	}
	
}
