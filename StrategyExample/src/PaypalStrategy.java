
public class PaypalStrategy implements PaymentStrategy {

	private String emailId;
	private String password;
	
	public PaypalStrategy(String email, String pw) {
		this.emailId = email;
		this.password = pw;
	}
	
	@Override
	public void pay(double amount) {
		System.out.printf("%.2f paid with Paypal.\n", amount);
		
	}
	
}
