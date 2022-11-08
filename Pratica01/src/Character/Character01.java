package Character;
import AttackStrong;
import JumpMedium;
import RunMedium;

public class Character01 extends Character{

	public Character01() {

		setJump(new JumpMedium());
		setRun(new RunMedium());
		setAttack(new AttackStrong());
		
	}
	
}
