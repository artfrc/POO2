
public class Item {

	private String idCode;
	private double price;
	
	public Item(String code, double price) {
		this.setIdCode(code);
		this.setPrice(price);
	}

	public String getIdCode() {
		return idCode;
	}

	public void setIdCode(String idCode) {
		this.idCode = idCode;
	}

	public double getPrice() {
		return price;
	}

	public void setPrice(double price) {
		this.price = price;
	}
	
	
	
}
