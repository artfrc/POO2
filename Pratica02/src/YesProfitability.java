
public class YesProfitability implements Profitability{

	@Override
	public double profitability(double percentage) {
		if(percentage == 0) {
			percentage = 0.05;
		}
		return percentage;
	}

	
	
}
