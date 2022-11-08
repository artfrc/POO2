import Character.Character01;
import Character.Character02;
import Character.Character03;

public class Main {

	public static void main(String[] args) {
		
		Character01 c1 = new Character01();
		Character02 c2 = new Character02();
		Character03 c3 = new Character03();
		
		System.out.println(">> Character 1 is doing his actions!\n");
		c1.attack();
		c1.jump();
		c1.run();
		
		System.out.println("\n>> Character 2 is doing his actions!\n");
		c2.attack();
		c2.jump();
		c2.run();
		
		System.out.println("\n>> Character 1 is doing his actions!\n");
		c1.setAttack(new AttackWeak());
		c1.attack();
		
		c1.setJump(new JumpHigh());
		c1.jump();
		
		c1.setRun(new RunFast());
		c1.run();
		
		System.out.println("\n>> Character 3 is doing his actions!\n");
		c3.attack();
		c3.jump();
		c3.run();
		
	}
	
}
