
public class YesLimit implements Limit{

	@Override
	public double limit(double lm) {
		if(lm == 0) {
			lm = 500;
		}
		return lm;
	}

}
