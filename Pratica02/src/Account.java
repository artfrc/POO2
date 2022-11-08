
public abstract class Account {

	private double profitability;
	private double monthly_payment;
	private String movement;
	private double limit;
	
	public double getProfitability() {
		return profitability;
	}
	
	public void setProfitability(double profitability) {
		this.profitability = profitability;
	}
	
	public double getMonthly_payment() {
		return monthly_payment;
	}
	
	public void setMonthly_payment(double monthly_payment) {
		this.monthly_payment = monthly_payment;
	}
	
	public String getMovement() {
		return movement;
	}
	
	public void setMovement(String movement) {
		this.movement = movement;
	}
	
	public double getLimit() {
		return limit;
	}
	
	public void setLimit(double limit) {
		this.limit = limit;
	}
	
}
