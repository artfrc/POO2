import java.util.ArrayList;
import java.util.List;

public class ShoppingCart {

	//List of items
	List <Item> items;
	
	public ShoppingCart() {
		this.items = new ArrayList<Item>();
	}
	
	public void addItem(Item item) {
		this.items.add(item);
	}
	
	public void removeItem(Item item) {
		this.items.remove(item);
	}
	
	public double calculeTotalPrice() {
		double sum = 0;
		for(Item item : items) {
			sum += item.getPrice();
		}
		
		return sum;
	}
	
	public void pay(PaymentStrategy paymentMethod) {
		double amount = calculeTotalPrice();
		paymentMethod.pay(amount);
	}
	
}
