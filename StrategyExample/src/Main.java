
public class Main {

	/* =============================================================== |
	|  																   |
	|	Será um programa que simula um carrinho de compras.			   |
	|	Será usado o padrão Strategy na implementação desse exemplo.   |	
	|  																   |
	|  =============================================================== | */ 
	
	public static void main(String[] args) {
		
		ShoppingCart cart = new ShoppingCart();
		
		Item item1 = new Item("1234", 10);
		Item item2 = new Item("5678", 27.99);
		
		cart.addItem(item1);
		cart.addItem(item2);
		
		cart.pay(new PaypalStrategy("myemail@example.com", "mypw"));
		
		cart.pay(new CreditCardStrategy("Name Example", "1234567890", "786", "12/15"));
		
	}
	
}
