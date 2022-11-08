
public class YesMonthlyPayment implements MonthlyPayment{

	@Override
	public double monthlyPayment(double mp) {
		if(mp == 0) {
			mp = 10;
		}
		return mp;
	}
	
}
